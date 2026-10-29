#!/usr/bin/env python3
"""
gestionar_consignas.py — Gestor de consignas Deckard para publicación en MyST Markdown.

Funcionalidades:
- Carga de ejercicios desde el banco (ejercicio.yaml, enunciado.md, solucion.c, cabeceras).
- Generación de páginas MyST Markdown individuales con badges, tablas de firmas,
  pistas progresivas (tab-set), solución plegable (dropdown) y enlace de descarga .ripkg.
- Empaquetado automático o bajo demanda de paquetes .ripkg mediante `deckard export pack`.
- Generación de página principal `index.md` con métricas, estadísticas pedagógicas y guía Ripley.
- Inyección y sincronización del árbol de contenidos (TOC) en `myst.yml`.
"""

from __future__ import annotations

import argparse
import os
import shutil
import subprocess
import sys
from collections import defaultdict
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple

try:
    from ruamel.yaml import YAML
    _HAS_RUAMEL = True
except ImportError:
    import yaml
    _HAS_RUAMEL = False


# ==============================================================================
# Configuración y Mapeos Pedagógicos
# ==============================================================================

BLOOM_INFO: Dict[int, Dict[str, str]] = {
    1: {"nombre": "Recordar", "color": "info"},
    2: {"nombre": "Comprender", "color": "primary"},
    3: {"nombre": "Aplicar", "color": "success"},
    4: {"nombre": "Analizar", "color": "warning"},
    5: {"nombre": "Evaluar / Crear", "color": "danger"},
}

TEMAS_TITULOS: Dict[str, str] = {
    "algoritmos_ordenamiento": "Algoritmos de Ordenamiento",
    "analisis_codigo": "Análisis y Trazado de Código",
    "archivos": "Manejo de Archivos de Texto",
    "archivos_binarios": "Archivos Binarios",
    "aritmetica": "Aritmética y Operadores",
    "arreglos": "Arreglos Unidimensionales (Vectores)",
    "build_systems": "Sistemas de Construcción (Build Systems)",
    "cadenas": "Cadenas de Caracteres (Strings)",
    "caracteres": "Manipulación de Caracteres",
    "complejidad": "Complejidad Algorítmica",
    "condicionales": "Estructuras Condicionales",
    "diseno_api": "Diseño de APIs y Módulos",
    "enumeraciones": "Enumeraciones (enum)",
    "estructuras": "Estructuras de Datos Compuestas (struct)",
    "estructuras_control": "Estructuras de Control",
    "estructuras_datos": "Estructuras de Datos Dinámicas",
    "funciones": "Funciones y Parámetros",
    "io_formato": "Entrada y Salida Formateada (I/O)",
    "lazos": "Estructuras Repetitivas (Lazos)",
    "lazos_anidados": "Lazos Anidados",
    "librerias": "Bibliotecas y Modularización",
    "matrices": "Matrices y Arreglos Multidimensionales",
    "memoria": "Modelo de Memoria en C",
    "memoria_dinamica": "Gestión de Memoria Dinámica (Heap)",
    "operaciones_bits": "Operaciones a Nivel de Bits",
    "punteros": "Punteros y Direccionamiento",
    "punteros_avanzados": "Punteros Avanzados y Punteros a Función",
    "recursividad": "Recursividad",
    "refactorizacion": "Refactorización y Calidad de Código",
    "secuencias": "Procesamiento de Secuencias",
    "sintaxis": "Sintaxis Básica de C",
    "tad": "Tipos Abstractos de Datos (TAD)",
    "testing": "Testing Unitario y Verificación",
    "tipos_datos": "Tipos de Datos Primitivos",
    "tipos_datos_abstractos": "Tipos de Datos Abstractos Avanzados",
}

UNIDADES_CURRICULARES: Dict[str, Tuple[str, List[str]]] = {
    "unidad_1": (
        "Unidad 1: Fundamentos y Estructuras de Control",
        [
            "sintaxis", "tipos_datos", "aritmetica", "io_formato",
            "condicionales", "lazos", "lazos_anidados", "funciones", "secuencias"
        ],
    ),
    "unidad_2": (
        "Unidad 2: Tipos Compuestos y Direccionamiento",
        [
            "arreglos", "matrices", "cadenas", "caracteres",
            "punteros", "estructuras", "enumeraciones"
        ],
    ),
    "unidad_3": (
        "Unidad 3: Memoria Dinámica y Persistencia",
        [
            "memoria", "memoria_dinamica", "punteros_avanzados",
            "archivos", "archivos_binarios"
        ],
    ),
    "unidad_4": (
        "Unidad 4: Tipos Abstractos y Algorítmica",
        [
            "estructuras_datos", "tad", "tipos_datos_abstractos",
            "recursividad", "algoritmos_ordenamiento", "complejidad"
        ],
    ),
    "unidad_5": (
        "Unidad 5: Ingeniería de Software y Calidad en C",
        [
            "testing", "librerias", "build_systems", "diseno_api",
            "refactorizacion", "analisis_codigo", "operaciones_bits"
        ],
    ),
}

GRAFO_TEMATICO: Dict[str, List[str]] = {
    "sintaxis": [],
    "tipos_datos": ["sintaxis"],
    "aritmetica": ["tipos_datos"],
    "io_formato": ["aritmetica"],
    "condicionales": ["aritmetica"],
    "lazos": ["condicionales"],
    "lazos_anidados": ["lazos"],
    "secuencias": ["lazos"],
    "estructuras_control": ["condicionales", "lazos"],
    "funciones": ["lazos", "secuencias"],
    "caracteres": ["tipos_datos", "funciones"],
    "arreglos": ["funciones", "lazos"],
    "cadenas": ["arreglos", "caracteres"],
    "matrices": ["arreglos", "lazos_anidados"],
    "punteros": ["funciones", "arreglos"],
    "estructuras": ["tipos_datos", "funciones"],
    "enumeraciones": ["tipos_datos", "condicionales"],
    "operaciones_bits": ["tipos_datos", "aritmetica"],
    "memoria": ["punteros", "estructuras"],
    "memoria_dinamica": ["memoria", "punteros"],
    "punteros_avanzados": ["memoria_dinamica"],
    "recursividad": ["funciones", "punteros"],
    "algoritmos_ordenamiento": ["arreglos", "lazos_anidados", "recursividad"],
    "complejidad": ["algoritmos_ordenamiento", "lazos_anidados"],
    "archivos": ["cadenas", "punteros", "io_formato"],
    "archivos_binarios": ["archivos", "estructuras", "memoria"],
    "librerias": ["funciones", "estructuras"],
    "build_systems": ["librerias"],
    "diseno_api": ["librerias", "punteros"],
    "tad": ["estructuras", "punteros", "memoria_dinamica"],
    "tipos_datos_abstractos": ["tad"],
    "estructuras_datos": ["tad", "memoria_dinamica", "recursividad"],
    "testing": ["librerias", "funciones"],
    "refactorizacion": ["testing", "diseno_api"],
    "analisis_codigo": ["memoria", "testing"],
}


def extraer_dependencias_tags(tags: List[str]) -> List[str]:
    """Extrae nombres de temas prerrequisito desde etiquetas prefijadas (dep:, req:, prereq:)."""
    deps: List[str] = []
    for tag in tags:
        for prefijo in ("dep:", "req:", "prereq:"):
            if tag.startswith(prefijo):
                nom = tag[len(prefijo):].strip()
                if nom and nom not in deps:
                    deps.append(nom)
    return deps


def resolver_dependencias_ejercicio(ej_data: Dict[str, Any]) -> Tuple[List[str], List[str]]:
    """Determina las dependencias temáticas y los tags 'dep:<tema>' canónicos de un ejercicio."""
    tags = ej_data.get("tags") or []
    deps_desde_tags = extraer_dependencias_tags(tags)
    prerreqs_explicitos = ej_data.get("prerrequisitos") or []

    # Combinar dependencias explícitas de tags y campo prerrequisitos
    deps_combinadas = list(deps_desde_tags)
    for p in prerreqs_explicitos:
        if p in GRAFO_TEMATICO and p not in deps_combinadas:
            deps_combinadas.append(p)

    # Si no tiene dependencias explícitas declaradas, derivar del grafo temático canónico
    tema = ej_data.get("tema", "")
    if not deps_combinadas and tema in GRAFO_TEMATICO:
        deps_combinadas = list(GRAFO_TEMATICO[tema])

    tags_dep = [f"dep:{d}" for d in deps_combinadas]
    return deps_combinadas, tags_dep


# ==============================================================================
# Lectura y Procesamiento de Ejercicios
# ==============================================================================

def cargar_ejercicio(dir_ejercicio: Path) -> Optional[Dict[str, Any]]:
    """Carga la metadata de un ejercicio y sus archivos complementarios."""
    yaml_path = dir_ejercicio / "ejercicio.yaml"
    if not yaml_path.is_file():
        yaml_path = dir_ejercicio / "ejercicio.yml"
        if not yaml_path.is_file():
            return None

    try:
        import yaml
        with open(yaml_path, "r", encoding="utf-8") as f:
            data = yaml.safe_load(f)
            if not isinstance(data, dict):
                return None
    except Exception as e:
        print(f"[!] Error leyendo {yaml_path}: {e}", file=sys.stderr)
        return None

    # Normalizar campos clave
    ej_id = data.get("id") or dir_ejercicio.name
    data["id"] = ej_id
    data["titulo"] = data.get("titulo") or ej_id.replace("-", " ").title()
    data["tema"] = data.get("tema") or "otros"
    data["bloom"] = int(data.get("bloom", 1))
    data["minutos_estimados"] = int(data.get("minutos_estimados") or data.get("minutos") or 20)
    data["tags"] = [str(t) for t in (data.get("tags") or [])]
    data["pistas"] = data.get("pistas") or []
    data["funciones"] = data.get("funciones") or []
    data["tests_funciones"] = data.get("tests_funciones") or []
    data["dir_path"] = dir_ejercicio

    # Resolver dependencias temáticas e inyectar tags dep:<tema>
    deps_temas, tags_dep = resolver_dependencias_ejercicio(data)
    data["dependencias_temas"] = deps_temas
    data["dependencias_tags"] = tags_dep
    for td in tags_dep:
        if td not in data["tags"]:
            data["tags"].append(td)

    # Cargar enunciado externo si existe
    enunciado_path = dir_ejercicio / "enunciado.md"
    if enunciado_path.is_file():
        data["enunciado_md"] = enunciado_path.read_text(encoding="utf-8").strip()
    else:
        data["enunciado_md"] = data.get("enunciado_md", "").strip()

    # Cargar solución C externa si existe
    solucion_path = dir_ejercicio / "solucion.c"
    if solucion_path.is_file():
        data["solucion_c"] = solucion_path.read_text(encoding="utf-8").strip()
    else:
        data["solucion_c"] = data.get("solucion_c", "").strip()

    # Cargar cabecera C si existe
    header_path = dir_ejercicio / f"{ej_id}.h"
    if not header_path.is_file():
        headers = list(dir_ejercicio.glob("*.h"))
        if headers:
            header_path = headers[0]
    if header_path.is_file():
        data["header_c"] = header_path.read_text(encoding="utf-8").strip()
        data["header_name"] = header_path.name
    else:
        data["header_c"] = ""
        data["header_name"] = ""

    return data


def cargar_banco(dir_banco: Path) -> List[Dict[str, Any]]:
    """Carga todos los ejercicios válidos dentro del directorio del banco."""
    ejercicios: List[Dict[str, Any]] = []
    if not dir_banco.is_dir():
        print(f"[!] Directorio de banco no encontrado: {dir_banco}", file=sys.stderr)
        return ejercicios

    for entrada in sorted(dir_banco.iterdir()):
        if entrada.is_dir() and not entrada.name.startswith("."):
            ej = cargar_ejercicio(entrada)
            if ej:
                ejercicios.append(ej)

    return ejercicios


# ==============================================================================
# Renderizado de Páginas MyST Markdown
# ==============================================================================

def cargar_plantilla_jinja(nombre: str = "ejercicio.md", dir_templates: Path = Path("templates")) -> Optional[Any]:
    """Carga y compila la plantilla Jinja2 desde el directorio templates."""
    ruta = dir_templates / nombre
    if ruta.is_file():
        try:
            import jinja2
            return jinja2.Template(ruta.read_text(encoding="utf-8"))
        except Exception as e:
            print(f"[!] Advertencia: no se pudo cargar plantilla {ruta}: {e}", file=sys.stderr)
    return None


def renderizar_pagina_myst(
    ej: Dict[str, Any],
    rel_ripkg_path: str,
    incluir_solucion: bool = True,
    incluir_header: bool = True,
    plantilla_jinja: Optional[Any] = None,
) -> str:
    """Genera el contenido MyST Markdown para un ejercicio individual utilizando templates/ejercicio.md."""
    if plantilla_jinja is not None:
        try:
            return plantilla_jinja.render(
                ejercicio=ej,
                rel_ripkg_path=rel_ripkg_path,
                incluir_meta=True,
                incluir_pistas=True,
                incluir_tests=True,
                incluir_solucion=incluir_solucion,
                incluir_header=incluir_header,
            )
        except Exception as e:
            print(f"[!] Error renderizando plantilla para {ej.get('id')}: {e}. Usando generador nativo.", file=sys.stderr)

    b_info = BLOOM_INFO.get(ej["bloom"], {"nombre": "Desconocido", "color": "secondary"})
    tema_legible = TEMAS_TITULOS.get(ej["tema"], ej["tema"].replace("_", " ").title())

    partes: List[str] = [
        f"# {ej['titulo']}",
        "",
        f"> **ID:** `{ej['id']}` · **Tema:** {tema_legible} (`{ej['tema']}`) · "
        f"**Bloom:** B{ej['bloom']} ({b_info['nombre']}) · "
        f"**Carga estimada:** ~{ej['minutos_estimados']} min",
    ]

    if ej["tags"]:
        tags_str = ", ".join(f"`{t}`" for t in ej["tags"])
        partes.append(f"> **Etiquetas:** {tags_str}")

    partes.append("")

    # Caja de descarga y ejecución con Ripley
    partes.extend([
        "::: {admonition} 📦 Paquete de Verificación Local (Ripley)",
        ":class: tip",
        "",
        "Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:",
        "",
        f"- [📥 **Descargar paquete `{ej['id']}.ripkg`**]({rel_ripkg_path})",
        "",
        "Ejecución con el asistente de cátedra:",
        "```bash",
        f"ripley run {ej['id']}.ripkg",
        "```",
        ":::",
        "",
    ])

    # Consigna
    partes.extend([
        "## 📖 Consigna",
        "",
        ej["enunciado_md"] if ej["enunciado_md"] else "_Sin consigna especificada._",
        "",
    ])

    # Interfaz / Cabecera C
    if incluir_header and ej.get("header_c"):
        partes.extend([
            f"## 📋 Prototipos y Cabecera (`{ej['header_name']}`)",
            "",
            "```{code-block} c",
            ej["header_c"],
            "```",
            "",
        ])

    # Tabla de especificación de funciones
    if ej["funciones"]:
        partes.extend([
            "## ⚙️ Especificación de Funciones",
            "",
            "| Función | Retorno | Parámetros | Descripción |",
            "| :--- | :--- | :--- | :--- |",
        ])
        for f in ej["funciones"]:
            nom = f.get("nombre", "-")
            ret = f.get("retorno", "void")
            par = f.get("parametros", "void")
            desc = f.get("descripcion", "")
            partes.append(f"| `{nom}` | `{ret}` | `{par}` | {desc} |")
        partes.append("")

    # Pistas pedagógicas escalonadas (tabs interactivos)
    if ej["pistas"]:
        partes.extend([
            "## 💡 Pistas Progresivas",
            "",
            "````{tab-set}",
        ])
        for idx, pista in enumerate(ej["pistas"], 1):
            partes.extend([
                f"```{{tab-item}} Pista {idx}",
                pista.strip(),
                "```",
            ])
        partes.extend([
            "````",
            "",
        ])

    # Solución modelo plegada en dropdown
    if incluir_solucion and ej.get("solucion_c"):
        partes.extend([
            "## ✓ Solución Modelo de Cátedra",
            "",
            "```{dropdown} 🔍 Revelar solución canónica en C",
            ":open: false",
            "",
            "```{code-block} c",
            ej["solucion_c"],
            "```",
            "```",
            "",
        ])

    return "\n".join(partes)


# ==============================================================================
# Generación de Archivos y Directorios
# ==============================================================================

def generar_paginas_myst(
    ejercicios: List[Dict[str, Any]],
    dir_salida: Path,
    dir_paquetes: Path,
    incluir_solucion: bool = True,
    incluir_header: bool = True,
) -> Dict[str, List[Path]]:
    """Escribe las páginas .md organizadas en subcarpetas por tema."""
    dir_salida.mkdir(parents=True, exist_ok=True)
    por_tema: Dict[str, List[Path]] = defaultdict(list)
    plantilla = cargar_plantilla_jinja("ejercicio.md")

    for ej in ejercicios:
        tema = ej["tema"]
        subcarpeta_tema = dir_salida / tema
        subcarpeta_tema.mkdir(parents=True, exist_ok=True)

        archivo_md = subcarpeta_tema / f"{ej['id']}.md"
        # Ruta relativa desde la página generada hacia el ripkg
        # Ej: consignas/arreglos/ej.md -> ../../paquetes/ej.ripkg
        rel_ripkg = os.path.relpath(dir_paquetes / f"{ej['id']}.ripkg", subcarpeta_tema)

        contenido = renderizar_pagina_myst(
            ej=ej,
            rel_ripkg_path=rel_ripkg,
            incluir_solucion=incluir_solucion,
            incluir_header=incluir_header,
            plantilla_jinja=plantilla,
        )
        archivo_md.write_text(contenido, encoding="utf-8")
        por_tema[tema].append(archivo_md)

    return por_tema


def generar_indice_general(
    ejercicios: List[Dict[str, Any]],
    archivo_indice: Path,
    dir_consignas_rel: str = "consignas",
) -> None:
    """Genera la página raíz index.md con métricas del banco pedagógico."""
    total_ejercicios = len(ejercicios)
    total_minutos = sum(ej["minutos_estimados"] for ej in ejercicios)
    total_horas = round(total_minutos / 60, 1)

    conteo_bloom: Dict[int, int] = defaultdict(int)
    por_tema: Dict[str, List[Dict[str, Any]]] = defaultdict(list)
    for ej in ejercicios:
        conteo_bloom[ej["bloom"]] += 1
        por_tema[ej["tema"]].append(ej)

    lineas = [
        "# Banco de Consignas Prácticas — Programación 1",
        "",
        "Bienvenido al repositorio central de ejercicios prácticos y autoevaluaciones.",
        "",
        "## 📊 Métricas Globales del Banco",
        "",
        f"- **Total de Ejercicios:** {total_ejercicios}",
        f"- **Carga Horaria de Práctica Acumulada:** ~{total_minutos} minutos ({total_horas} hs cátedra)",
        f"- **Ejes Temáticos Cubiertos:** {len(por_tema)} módulos",
        "",
        "### Distribución Taxonómica (Bloom)",
        "",
        "| Nivel | Dimensión Cognitiva | Cantidad | Porcentaje |",
        "| :---: | :--- | :---: | :---: |",
    ]

    for b in range(1, 6):
        cnt = conteo_bloom[b]
        pct = (cnt / total_ejercicios * 100) if total_ejercicios else 0
        nom = BLOOM_INFO.get(b, {}).get("nombre", "-")
        lineas.append(f"| B{b} | {nom} | {cnt} | {pct:.1f}% |")

    lineas.extend([
        "",
        "## 🚀 Flujo de Trabajo con Ripley",
        "",
        "Cada ejercicio dispone de un paquete `.ripkg` descargable que encapsula los casos de prueba,",
        "las cabeceras C y las verificaciones pedagógicas.",
        "",
        "1. **Descargá** el paquete `.ripkg` del ejercicio que quieras resolver.",
        "2. **Ejecutá** la suite de pruebas local:",
        "   ```bash",
        "   ripley run <ejercicio>.ripkg",
        "   ```",
        "3. **Seguí** el ciclo TDD/Red-Green-Refactor hasta que todos los tests pasen exitosamente.",
        "",
        "## 📑 Índice por Ejes Temáticos",
        "",
        "| Tema | Nombre Descriptivo | Ejercicios | Carga Total |",
        "| :--- | :--- | :---: | :---: |",
    ])

    for tema, items in sorted(por_tema.items(), key=lambda t: t[0]):
        nom_legible = TEMAS_TITULOS.get(tema, tema.replace("_", " ").title())
        minutos = sum(x["minutos_estimados"] for x in items)
        lineas.append(f"| `{tema}` | {nom_legible} | {len(items)} | ~{minutos} min |")

    lineas.append("")
    archivo_indice.write_text("\n".join(lineas), encoding="utf-8")


def generar_pagina_grafo_tematico(
    ejercicios: List[Dict[str, Any]],
    archivo_salida: Path,
    dir_consignas_rel: str = "consignas",
) -> None:
    """Genera la página grafo_tematico.md con diagrama Mermaid detallado y matriz de dependencias."""
    por_tema: Dict[str, List[Dict[str, Any]]] = defaultdict(list)
    for ej in ejercicios:
        por_tema[ej["tema"]].append(ej)

    lineas: List[str] = [
        "# 🗺️ Grafo de Dependencias Temáticas y Rutas de Aprendizaje",
        "",
        "Este mapa conceptual modela las dependencias formativas entre los 35 ejes temáticos de **Programación 1**.",
        "Cada relación representa un prerrequisito conceptual formal establecido mediante etiquetas de metadatos `dep:<tema>`.",
        "",
        "::: {admonition} 🏷️ Convención de Etiquetas de Dependencia",
        ":class: note",
        "Las consignas prácticas declaran sus dependencias formativas mediante etiquetas:",
        "- `dep:<tema>`: Indica que resolver el ejercicio requiere dominio previo del eje temático `<tema>` (ej. `dep:punteros`, `dep:arreglos`).",
        "- `req:<id>`: Dependencia estricta respecto a un ejercicio atómico previo específico.",
        ":::",
        "",
        "## 🧭 Diagrama de Dependencias Curriculares",
        "",
        "El siguiente diagrama de flujo acíclico dirigido (DAG) estructura la progresión cognitiva a lo largo de las 5 Unidades de la materia:",
        "",
        "```mermaid",
        "flowchart TD",
    ]

    # Construir subgrafos por unidad
    for u_id, (u_titulo, u_temas) in UNIDADES_CURRICULARES.items():
        lineas.append(f"    subgraph {u_id} [\"{u_titulo}\"]")
        for t in u_temas:
            nom = TEMAS_TITULOS.get(t, t.replace("_", " ").title())
            cant = len(por_tema.get(t, []))
            blooms = [ej["bloom"] for ej in por_tema.get(t, [])]
            b_prom = round(sum(blooms) / len(blooms), 1) if blooms else 1.0
            lineas.append(f'        {t}["{nom}<br/><small>{cant} ejs · B{b_prom}</small>"]')
        lineas.append("    end")

    # Temas fuera de las 5 unidades estándar (si existieran)
    todos_u = {t for _, (_, temas) in UNIDADES_CURRICULARES.items() for t in temas}
    temas_extra = [t for t in sorted(GRAFO_TEMATICO.keys()) if t not in todos_u]
    if temas_extra:
        lineas.append("    subgraph u_extra [\"Ejes Complementarios\"]")
        for t in temas_extra:
            nom = TEMAS_TITULOS.get(t, t.replace("_", " ").title())
            cant = len(por_tema.get(t, []))
            lineas.append(f'        {t}["{nom}<br/><small>{cant} ejs</small>"]')
        lineas.append("    end")

    # Conectar aristas según GRAFO_TEMATICO
    for post, pres in GRAFO_TEMATICO.items():
        for pre in pres:
            lineas.append(f"    {pre} --> {post}")

    lineas.extend([
        "```",
        "",
        "## 📊 Matriz Detallada de Prerrequisitos y Habilitaciones",
        "",
        "| Eje Temático | Unidad | Prerrequisitos Requeridos (`dep:*`) | Habilita Temas Subsiguientes | Ejercicios | Carga Total |",
        "| :--- | :---: | :--- | :--- | :---: | :---: |",
    ])

    # Calcular dependencias inversas (qué habilita cada tema)
    habilita: Dict[str, List[str]] = defaultdict(list)
    for post, pres in GRAFO_TEMATICO.items():
        for pre in pres:
            habilita[pre].append(post)

    # Identificar unidad de cada tema
    unidad_de_tema: Dict[str, str] = {}
    for u_id, (u_titulo, u_temas) in UNIDADES_CURRICULARES.items():
        num_u = u_id.replace("unidad_", "U")
        for t in u_temas:
            unidad_de_tema[t] = num_u

    for tema, pres in sorted(GRAFO_TEMATICO.items()):
        nom = TEMAS_TITULOS.get(tema, tema.replace("_", " ").title())
        u_str = unidad_de_tema.get(tema, "Extra")
        pres_str = ", ".join(f"`dep:{p}`" for p in pres) if pres else "_Raíz (sin requisitos)_"
        subs = habilita.get(tema, [])
        subs_str = ", ".join(f"`{s}`" for s in subs) if subs else "_Terminal_"
        cant = len(por_tema.get(tema, []))
        minutos = sum(e["minutos_estimados"] for e in por_tema.get(tema, []))
        lineas.append(f"| `{tema}`<br/>**{nom}** | {u_str} | {pres_str} | {subs_str} | {cant} | ~{minutos} min |")

    lineas.extend([
        "",
        "## 🚀 Rutas Críticas de Especialización",
        "",
        "### 1. Ruta de Memoria Dinámica y Tipos Abstractos de Datos (Heap & TAD)",
        "Progresión medular de la materia para el desarrollo de estructuras de datos persistentes y dinámicas:",
        "```",
        "sintaxis ➔ tipos_datos ➔ funciones ➔ arreglos ➔ punteros ➔ memoria ➔ memoria_dinamica ➔ tad ➔ estructuras_datos",
        "```",
        "",
        "### 2. Ruta de Algorítmia, Búsqueda y Complejidad",
        "Enfoque orientado a optimización, eficiencia temporal y espacial:",
        "```",
        "lazos ➔ lazos_anidados ➔ arreglos ➔ recursividad ➔ algoritmos_ordenamiento ➔ complejidad",
        "```",
        "",
        "### 3. Ruta de Persistencia y Entrada/Salida en Disco",
        "Flujo para el tratamiento de archivos secuenciales y registros binarios estructurados:",
        "```",
        "io_formato + cadenas + punteros ➔ archivos (texto) ➔ estructuras ➔ archivos_binarios",
        "```",
        "",
        "### 4. Ruta de Ingeniería de Software, Testing y Calidad en C",
        "Desarrollo de módulos robustos, aserciones, diseño de APIs y refactorización continua:",
        "```",
        "funciones ➔ librerias ➔ diseno_api ➔ testing ➔ refactorizacion ➔ analisis_codigo",
        "```",
        "",
    ])

    archivo_salida.write_text("\n".join(lineas), encoding="utf-8")
    print(f"✓ Grafo temático generado exitosamente en {archivo_salida}.")


def aplicar_tags_dependencias_en_disco(
    ejercicios: List[Dict[str, Any]],
    solo_imprimir: bool = False,
) -> Tuple[int, int]:
    """Inyecta las etiquetas 'dep:<tema>' en los archivos ejercicio.yaml de cada ejercicio."""
    actualizados = 0
    omitidos = 0

    if _HAS_RUAMEL:
        yaml_parser = YAML()
        yaml_parser.preserve_quotes = True
    else:
        yaml_parser = None

    for ej in ejercicios:
        dir_ej = ej.get("dir_path")
        if not dir_ej or not dir_ej.is_dir():
            omitidos += 1
            continue

        yaml_file = dir_ej / "ejercicio.yaml"
        if not yaml_file.is_file():
            yaml_file = dir_ej / "ejercicio.yml"
            if not yaml_file.is_file():
                omitidos += 1
                continue

        tags_requeridos = ej.get("dependencias_tags") or []
        if not tags_requeridos:
            omitidos += 1
            continue

        if _HAS_RUAMEL:
            with open(yaml_file, "r", encoding="utf-8") as f:
                doc = yaml_parser.load(f)
            if not isinstance(doc, dict):
                omitidos += 1
                continue
            tags_actuales = [str(t) for t in (doc.get("tags") or [])]
            nuevos = [t for t in tags_requeridos if t not in tags_actuales]
            if not nuevos:
                omitidos += 1
                continue
            if solo_imprimir:
                print(f"[DRY-RUN] {ej['id']}: se agregarían tags {nuevos}")
                actualizados += 1
                continue
            doc["tags"] = tags_actuales + nuevos
            with open(yaml_file, "w", encoding="utf-8") as f:
                yaml_parser.dump(doc, f)
            actualizados += 1
        else:
            import yaml
            with open(yaml_file, "r", encoding="utf-8") as f:
                doc = yaml.safe_load(f)
            if not isinstance(doc, dict):
                omitidos += 1
                continue
            tags_actuales = [str(t) for t in (doc.get("tags") or [])]
            nuevos = [t for t in tags_requeridos if t not in tags_actuales]
            if not nuevos:
                omitidos += 1
                continue
            if solo_imprimir:
                print(f"[DRY-RUN] {ej['id']}: se agregarían tags {nuevos}")
                actualizados += 1
                continue
            doc["tags"] = tags_actuales + nuevos
            with open(yaml_file, "w", encoding="utf-8") as f:
                yaml.dump(doc, f, allow_unicode=True, sort_keys=False)
            actualizados += 1

    return actualizados, omitidos


# ==============================================================================
# Sincronización del TOC en myst.yml
# ==============================================================================

def actualizar_toc_myst(
    myst_yml_path: Path,
    ejercicios: List[Dict[str, Any]],
    ruta_index: str = "index.md",
    ruta_grafo: str = "grafo_tematico.md",
    dir_consignas_rel: str = "consignas",
    agrupar_por_unidad: bool = False,
) -> None:
    """Actualiza la sección `project.toc` en myst.yml respetando el formato MyST."""
    if not myst_yml_path.is_file():
        raise FileNotFoundError(f"No se encontró el archivo de configuración {myst_yml_path}")

    # Agrupar ejercicios por tema
    por_tema: Dict[str, List[Dict[str, Any]]] = defaultdict(list)
    for ej in ejercicios:
        por_tema[ej["tema"]].append(ej)

    # Ordenar ejercicios dentro de cada tema por Bloom ascendente y luego ID
    for tema in por_tema:
        por_tema[tema].sort(key=lambda x: (x["bloom"], x["minutos_estimados"], x["id"]))

    toc_entries: List[Dict[str, Any]] = [
        {"file": ruta_index},
        {"file": ruta_grafo},
    ]

    if agrupar_por_unidad:
        # Agrupar temas dentro de Unidades Curriculares
        temas_asignados = set()
        for u_id, (u_titulo, u_temas) in UNIDADES_CURRICULARES.items():
            temas_con_ejercicios = [t for t in u_temas if t in por_tema and por_tema[t]]
            if not temas_con_ejercicios:
                continue

            secciones_unidad: List[Dict[str, Any]] = []
            for t in temas_con_ejercicios:
                temas_asignados.add(t)
                nom_tema = TEMAS_TITULOS.get(t, t.replace("_", " ").title())
                children_tema = [
                    {"file": f"{dir_consignas_rel}/{t}/{ej['id']}.md"}
                    for ej in por_tema[t]
                ]
                secciones_unidad.append({
                    "title": nom_tema,
                    "children": children_tema,
                })

            toc_entries.append({
                "title": u_titulo,
                "children": secciones_unidad,
            })

        # Temas remanentes no asignados a unidades estándar
        temas_extra = [t for t in sorted(por_tema.keys()) if t not in temas_asignados]
        if temas_extra:
            secciones_extra: List[Dict[str, Any]] = []
            for t in temas_extra:
                nom_tema = TEMAS_TITULOS.get(t, t.replace("_", " ").title())
                children_tema = [
                    {"file": f"{dir_consignas_rel}/{t}/{ej['id']}.md"}
                    for ej in por_tema[t]
                ]
                secciones_extra.append({
                    "title": nom_tema,
                    "children": children_tema,
                })
            toc_entries.append({
                "title": "Consignas Complementarias",
                "children": secciones_extra,
            })
    else:
        # Agrupación directa por Tema
        for tema in sorted(por_tema.keys()):
            nom_tema = TEMAS_TITULOS.get(tema, tema.replace("_", " ").title())
            children_files = [
                {"file": f"{dir_consignas_rel}/{tema}/{ej['id']}.md"}
                for ej in por_tema[tema]
            ]
            toc_entries.append({
                "title": nom_tema,
                "children": children_files,
            })

    # Cargar y modificar myst.yml
    if _HAS_RUAMEL:
        yaml_parser = YAML()
        yaml_parser.preserve_quotes = True
        with open(myst_yml_path, "r", encoding="utf-8") as f:
            config = yaml_parser.load(f)

        if "project" not in config or not isinstance(config["project"], dict):
            config["project"] = {}
        config["project"]["toc"] = toc_entries

        with open(myst_yml_path, "w", encoding="utf-8") as f:
            yaml_parser.dump(config, f)
    else:
        import yaml
        with open(myst_yml_path, "r", encoding="utf-8") as f:
            config = yaml.safe_load(f) or {}

        if "project" not in config or not isinstance(config["project"], dict):
            config["project"] = {}
        config["project"]["toc"] = toc_entries

        with open(myst_yml_path, "w", encoding="utf-8") as f:
            yaml.dump(config, f, allow_unicode=True, sort_keys=False)

    print(f"✓ TOC actualizado en {myst_yml_path} con {len(toc_entries)} ramas principales.")


# ==============================================================================
# Empaquetado Ripley (.ripkg)
# ==============================================================================

def empaquetar_consignas_ripkg(
    ejercicios: List[Dict[str, Any]],
    dir_salida: Path,
    deckard_bin: str = "deckard",
    solo_faltantes: bool = True,
    banco_dir: Path = Path("banco"),
) -> Tuple[int, int]:
    """Ejecuta `deckard export pack` para generar los bundles .ripkg."""
    dir_salida.mkdir(parents=True, exist_ok=True)
    deckard_cmd = shutil.which(deckard_bin)
    if not deckard_cmd:
        print(f"[!] No se encontró el binario '{deckard_bin}' en el PATH.", file=sys.stderr)
        return 0, len(ejercicios)

    exitosos = 0
    fallidos = 0

    for ej in ejercicios:
        destino_ripkg = dir_salida / f"{ej['id']}.ripkg"
        if solo_faltantes and destino_ripkg.is_file():
            exitosos += 1
            continue

        cmd = [
            deckard_cmd,
            "export",
            "pack",
            ej["id"],
            "--banco",
            str(banco_dir),
            "-o",
            str(destino_ripkg),
        ]

        res = subprocess.run(cmd, capture_output=True, text=True)
        if res.returncode == 0 and destino_ripkg.is_file():
            exitosos += 1
        else:
            fallidos += 1
            print(f"[!] Falló empaquetado de {ej['id']}: {res.stderr.strip()}", file=sys.stderr)

    return exitosos, fallidos


# ==============================================================================
# CLI Principal
# ==============================================================================

def main() -> int:
    parser = argparse.ArgumentParser(
        description="Gestor de consignas Deckard para publicación en MyST Markdown.",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    parser.add_argument(
        "--banco",
        "-b",
        type=Path,
        default=Path("banco"),
        help="Directorio del banco de ejercicios.",
    )
    parser.add_argument(
        "--salida-consignas",
        type=Path,
        default=Path("consignas"),
        help="Directorio destino para las páginas MyST (.md).",
    )
    parser.add_argument(
        "--salida-paquetes",
        type=Path,
        default=Path("paquetes"),
        help="Directorio destino para los archivos .ripkg.",
    )
    parser.add_argument(
        "--myst-yml",
        type=Path,
        default=Path("myst.yml"),
        help="Ruta al archivo myst.yml a actualizar.",
    )
    parser.add_argument(
        "--index-md",
        type=Path,
        default=Path("index.md"),
        help="Ruta al archivo index.md principal del sitio.",
    )
    parser.add_argument(
        "--grafo-md",
        type=Path,
        default=Path("grafo_tematico.md"),
        help="Ruta al archivo grafo_tematico.md generado.",
    )
    parser.add_argument(
        "--sin-soluciones",
        action="store_true",
        help="Omitir el bloque de solución modelo en las páginas generadas.",
    )
    parser.add_argument(
        "--agrupar-unidades",
        action="store_true",
        help="Agrupar el TOC por Unidades Curriculares en lugar de temas planos.",
    )
    parser.add_argument(
        "--filtro-tema",
        type=str,
        default=None,
        help="Procesar únicamente los ejercicios que pertenezcan a este tema.",
    )
    parser.add_argument(
        "--filtro-id",
        type=str,
        default=None,
        help="Procesar únicamente el ejercicio con este ID.",
    )

    subparsers = parser.add_subparsers(dest="comando", help="Comando a ejecutar")

    subparsers.add_parser("paginas", help="Generar únicamente las páginas MyST Markdown.")
    subparsers.add_parser("toc", help="Actualizar únicamente el TOC en myst.yml.")
    subparsers.add_parser("index", help="Generar únicamente la portada index.md.")
    subparsers.add_parser("grafo", help="Generar la página de grafo de dependencias temáticas (grafo_tematico.md).")

    tag_p = subparsers.add_parser("tag-deps", help="Inyectar etiquetas dep:<tema> en los archivos ejercicio.yaml.")
    tag_p.add_argument(
        "--aplicar",
        action="store_true",
        help="Escribir los cambios en los archivos ejercicio.yaml (sin esta opción corre en modo dry-run).",
    )

    pack_p = subparsers.add_parser("pack", help="Generar paquetes .ripkg con Deckard.")
    pack_p.add_argument(
        "--forzar",
        action="store_true",
        help="Reempaquetar incluso si el archivo .ripkg ya existe.",
    )
    pack_p.add_argument(
        "--deckard-bin",
        type=str,
        default="deckard",
        help="Nombre o ruta del binario de deckard.",
    )

    subparsers.add_parser("stats", help="Mostrar estadísticas del banco.")

    all_p = subparsers.add_parser("all", help="Ejecutar index, grafo, paginas y sincronización de TOC.")
    all_p.add_argument(
        "--pack-ripkg",
        action="store_true",
        help="También generar los paquetes .ripkg durante la corrida.",
    )

    args = parser.parse_args()

    if not args.comando:
        parser.print_help()
        return 1

    banco_dir = args.banco.resolve()
    print(f"🔍 Cargando banco de ejercicios desde: {banco_dir}...")
    ejercicios = cargar_banco(banco_dir)

    if not ejercicios:
        print(f"[!] No se encontraron ejercicios en {banco_dir}.", file=sys.stderr)
        return 1

    # Aplicar filtros si se solicitaron
    if args.filtro_tema:
        ejercicios = [e for e in ejercicios if e["tema"] == args.filtro_tema]
        print(f"ℹ️ Filtro por tema '{args.filtro_tema}': {len(ejercicios)} ejercicios seleccionados.")
    if args.filtro_id:
        ejercicios = [e for e in ejercicios if e["id"] == args.filtro_id]
        print(f"ℹ️ Filtro por ID '{args.filtro_id}': {len(ejercicios)} ejercicio seleccionado.")

    if not ejercicios:
        print("[!] Ningún ejercicio coincide con los filtros especificados.", file=sys.stderr)
        return 1

    # Ejecutar comandos
    if args.comando == "stats":
        print("\n" + "=" * 60)
        print("📊 Estadísticas del Banco de Consignas")
        print("=" * 60)
        print(f"Total ejercicios: {len(ejercicios)}")
        por_tema = defaultdict(list)
        for e in ejercicios:
            por_tema[e["tema"]].append(e)
        print(f"Temas cubiertos ({len(por_tema)}):")
        for t, lista in sorted(por_tema.items()):
            nom = TEMAS_TITULOS.get(t, t)
            deps = GRAFO_TEMATICO.get(t, [])
            deps_str = ", ".join(f"dep:{d}" for d in deps) if deps else "raíz"
            print(f"  - {t:<26} ({nom}): {len(lista)} ejs [Requisitos: {deps_str}]")
        return 0

    if args.comando == "tag-deps":
        solo_imprimir = not getattr(args, "aplicar", False)
        modo_str = "DRY-RUN (inspección)" if solo_imprimir else "APLICANDO EN DISCO"
        print(f"🏷️ Procesando etiquetas 'dep:<tema>' en modo: {modo_str}...")
        act, omit = aplicar_tags_dependencias_en_disco(ejercicios, solo_imprimir=solo_imprimir)
        print(f"✓ Resultado: {act} ejercicios actualizados/identificados, {omit} sin cambios necesarios.")
        if solo_imprimir and act > 0:
            print("💡 Ejecutá con '--aplicar' para persistir los cambios en cada ejercicio.yaml.")
        return 0

    if args.comando in ("index", "all"):
        print(f"📝 Generando portada en {args.index_md}...")
        generar_indice_general(
            ejercicios=ejercicios,
            archivo_indice=args.index_md,
            dir_consignas_rel=str(args.salida_consignas.name),
        )
        print(f"✓ Portada generada exitosamente en {args.index_md}.")

    if args.comando in ("grafo", "all"):
        print(f"🗺️ Generando mapa de dependencias temáticas en {args.grafo_md}...")
        generar_pagina_grafo_tematico(
            ejercicios=ejercicios,
            archivo_salida=args.grafo_md,
            dir_consignas_rel=str(args.salida_consignas.name),
        )

    if args.comando in ("paginas", "all"):
        print(f"📄 Generando páginas MyST en {args.salida_consignas}...")
        generar_paginas_myst(
            ejercicios=ejercicios,
            dir_salida=args.salida_consignas,
            dir_paquetes=args.salida_paquetes,
            incluir_solucion=not args.sin_soluciones,
            incluir_header=True,
        )
        print(f"✓ Páginas generadas en {args.salida_consignas}.")

    if args.comando in ("toc", "all"):
        print(f"🧭 Sincronizando TOC en {args.myst_yml}...")
        actualizar_toc_myst(
            myst_yml_path=args.myst_yml,
            ejercicios=ejercicios,
            ruta_index=args.index_md.name,
            ruta_grafo=args.grafo_md.name,
            dir_consignas_rel=str(args.salida_consignas.name),
            agrupar_por_unidad=args.agrupar_unidades,
        )

    if args.comando == "pack" or (args.comando == "all" and getattr(args, "pack_ripkg", False)):
        solo_faltantes = not getattr(args, "forzar", False)
        deckard_bin = getattr(args, "deckard_bin", "deckard")
        print(f"📦 Empaquetando ripkg en {args.salida_paquetes} (solo_faltantes={solo_faltantes})...")
        ok, fail = empaquetar_consignas_ripkg(
            ejercicios=ejercicios,
            dir_salida=args.salida_paquetes,
            deckard_bin=deckard_bin,
            solo_faltantes=solo_faltantes,
            banco_dir=banco_dir,
        )
        print(f"✓ Paquetes .ripkg: {ok} listos, {fail} fallidos.")

    print("\n🎉 Operación finalizada con éxito.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
