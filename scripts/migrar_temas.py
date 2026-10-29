#!/usr/bin/env python3
"""
migrar_temas.py — Clasificación y reorganización de ejercicios del banco por tema.
Mueve banco/<id> a banco/<tema>/<id>, enriquece ejercicio.yaml a la nueva estructura
y realiza un commit semántico seguro con bloqueo flock.
"""

from __future__ import annotations

import argparse
import os
import shutil
import subprocess
import sys
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple

try:
    from ruamel.yaml import YAML
    _HAS_RUAMEL = True
except ImportError:
    import yaml
    _HAS_RUAMEL = False


UNIDADES_INFO: Dict[str, Tuple[int, str]] = {
    # Unidad 1
    "sintaxis": (1, "Fundamentos y Estructuras de Control"),
    "tipos_datos": (1, "Fundamentos y Estructuras de Control"),
    "aritmetica": (1, "Fundamentos y Estructuras de Control"),
    "io_formato": (1, "Fundamentos y Estructuras de Control"),
    "condicionales": (1, "Fundamentos y Estructuras de Control"),
    "lazos": (1, "Fundamentos y Estructuras de Control"),
    "lazos_anidados": (1, "Fundamentos y Estructuras de Control"),
    "secuencias": (1, "Fundamentos y Estructuras de Control"),
    "estructuras_control": (1, "Fundamentos y Estructuras de Control"),
    "funciones": (1, "Fundamentos y Estructuras de Control"),

    # Unidad 2
    "arreglos": (2, "Tipos Compuestos y Direccionamiento"),
    "matrices": (2, "Tipos Compuestos y Direccionamiento"),
    "cadenas": (2, "Tipos Compuestos y Direccionamiento"),
    "caracteres": (2, "Tipos Compuestos y Direccionamiento"),
    "punteros": (2, "Tipos Compuestos y Direccionamiento"),
    "estructuras": (2, "Tipos Compuestos y Direccionamiento"),
    "enumeraciones": (2, "Tipos Compuestos y Direccionamiento"),

    # Unidad 3
    "memoria": (3, "Memoria Dinámica y Persistencia"),
    "memoria_dinamica": (3, "Memoria Dinámica y Persistencia"),
    "punteros_avanzados": (3, "Memoria Dinámica y Persistencia"),
    "archivos": (3, "Memoria Dinámica y Persistencia"),
    "archivos_binarios": (3, "Memoria Dinámica y Persistencia"),

    # Unidad 4
    "estructuras_datos": (4, "Tipos Abstractos y Algorítmica"),
    "tad": (4, "Tipos Abstractos y Algorítmica"),
    "tipos_datos_abstractos": (4, "Tipos Abstractos y Algorítmica"),
    "recursividad": (4, "Tipos Abstractos y Algorítmica"),
    "algoritmos_ordenamiento": (4, "Tipos Abstractos y Algorítmica"),
    "complejidad": (4, "Tipos Abstractos y Algorítmica"),

    # Unidad 5
    "testing": (5, "Ingeniería de Software y Calidad en C"),
    "librerias": (5, "Ingeniería de Software y Calidad en C"),
    "build_systems": (5, "Ingeniería de Software y Calidad en C"),
    "diseno_api": (5, "Ingeniería de Software y Calidad en C"),
    "refactorizacion": (5, "Ingeniería de Software y Calidad en C"),
    "analisis_codigo": (5, "Ingeniería de Software y Calidad en C"),
    "operaciones_bits": (5, "Ingeniería de Software y Calidad en C"),
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


def inferir_subtema(ej_id: str, tema: str, tags: List[str]) -> str:
    """Infiere un subtema específico a partir de tags y del identificador."""
    id_lower = ej_id.lower()
    tags_lower = [t.lower() for t in tags if not t.startswith("dep:") and not t.startswith("req:")]

    palabras_clave = [
        ("arbol", "arboles_binarios"),
        ("bst", "arboles_binarios"),
        ("lista", "listas_enlazadas"),
        ("pila", "pilas_y_colas"),
        ("cola", "pilas_y_colas"),
        ("stack", "pilas_y_colas"),
        ("queue", "pilas_y_colas"),
        ("hash", "tablas_hash"),
        ("burbuja", "ordenamiento_burbuja"),
        ("insercion", "ordenamiento_insercion"),
        ("seleccion", "ordenamiento_seleccion"),
        ("quick", "quicksort"),
        ("merge", "mergesort"),
        ("binaria", "busqueda_binaria"),
        ("lineal", "busqueda_lineal"),
        ("malloc", "gestion_heap"),
        ("realloc", "gestion_heap"),
        ("free", "gestion_heap"),
        ("matriz", "matrices_2d"),
        ("diagonal", "matrices_2d"),
        ("string", "procesamiento_texto"),
        ("cadena", "procesamiento_texto"),
        ("csv", "archivos_estructurados"),
        ("log", "registro_eventos"),
        ("asercion", "aserciones_defensivas"),
        ("shadow", "visibilidad_variables"),
        ("bit", "operaciones_bits"),
        ("enum", "mapeo_estados"),
        ("fibonacci", "series_numericas"),
        ("primo", "teoria_numeros"),
        ("promedio", "estadistica_basica"),
        ("temperatura", "conversion_unidades"),
    ]

    for kw, sub in palabras_clave:
        if kw in id_lower or any(kw in t for t in tags_lower):
            return sub

    for t in tags_lower:
        if t != tema and len(t) > 2 and not t.isdigit():
            return t.replace("-", "_")

    return f"{tema}_general"


def inferir_dificultad(bloom: int, minutos: int) -> str:
    """Establece la dificultad pedagógica a partir del nivel cognitivo y la carga temporal."""
    if bloom <= 1:
        return "inicial"
    elif bloom == 2:
        return "inicial" if minutos <= 25 else "intermedia"
    elif bloom == 3:
        return "intermedia" if minutos <= 35 else "avanzada"
    elif bloom == 4:
        return "avanzada"
    else:
        return "desafio"


def inferir_tipo(bloom: int, minutos: int, tema: str) -> str:
    """Clasifica el rol pedagógico del ejercicio."""
    if bloom <= 1:
        return "concepto"
    elif bloom >= 5 or minutos >= 55:
        return "desafio"
    elif tema in ("testing", "analisis_codigo"):
        return "laboratorio"
    else:
        return "practica_guiada"


def procesar_ejercicios_de_temas(
    temas_objetivo: List[str],
    banco_dir: Path = Path("banco"),
) -> List[Tuple[Path, Path, str]]:
    """Identifica y mueve ejercicios de los temas indicados a su carpeta banco/<tema>/<id>,

    actualizando su metadata YAML a la nueva forma. Retorna lista de (origen, destino, id).
    """
    banco_dir = banco_dir.resolve()
    temas_set = set(temas_objetivo)
    yaml_parser = YAML()
    yaml_parser.preserve_quotes = True

    # Recopilar todos los ejercicios que pertenecen a estos temas
    ejercicios_a_migrar: List[Tuple[Path, str, Dict[str, Any]]] = []

    for item in sorted(banco_dir.iterdir()):
        if not item.is_dir() or item.name.startswith("."):
            continue

        # Puede ser banco/<id> o banco/<otro_tema>/<id>
        yaml_path = item / "ejercicio.yaml"
        if yaml_path.is_file():
            # Está en banco/<id>
            try:
                with open(yaml_path, "r", encoding="utf-8") as f:
                    data = yaml_parser.load(f)
                if isinstance(data, dict):
                    t = data.get("tema")
                    if t in temas_set:
                        ejercicios_a_migrar.append((item, t, data))
            except Exception as e:
                print(f"[!] Error leyendo {yaml_path}: {e}", file=sys.stderr)
        else:
            # Podría ser banco/<subtema>/<id>
            if item.name in temas_set:
                for subitem in item.iterdir():
                    if subitem.is_dir():
                        y2 = subitem / "ejercicio.yaml"
                        if y2.is_file():
                            try:
                                with open(y2, "r", encoding="utf-8") as f:
                                    data = yaml_parser.load(f)
                                if isinstance(data, dict) and data.get("tema") in temas_set:
                                    ejercicios_a_migrar.append((subitem, item.name, data))
                            except Exception as e:
                                print(f"[!] Error leyendo {y2}: {e}", file=sys.stderr)

    migrados: List[Tuple[Path, Path, str]] = []

    for dir_origen, tema, data in ejercicios_a_migrar:
        ej_id = data.get("id") or dir_origen.name
        dir_tema = banco_dir / tema
        dir_tema.mkdir(parents=True, exist_ok=True)
        dir_destino = dir_tema / ej_id

        # Mover directorio si no está en la ubicación final
        if dir_origen.resolve() != dir_destino.resolve():
            if dir_destino.exists():
                shutil.rmtree(dir_destino)
            shutil.move(str(dir_origen), str(dir_destino))
        else:
            dir_destino = dir_origen

        # Actualizar YAML con nueva forma
        yaml_dest = dir_destino / "ejercicio.yaml"
        if yaml_dest.is_file():
            try:
                with open(yaml_dest, "r", encoding="utf-8") as f:
                    doc = yaml_parser.load(f)
            except Exception:
                doc = data
        else:
            doc = data

        if not isinstance(doc, dict):
            continue

        # Inyectar campos de clasificación
        unidad, modulo = UNIDADES_INFO.get(tema, (1, "General"))
        bloom = int(doc.get("bloom", 1))
        minutos = int(doc.get("minutos_estimados") or doc.get("minutos") or 20)
        tags_actuales = [str(t) for t in (doc.get("tags") or [])]

        doc["id"] = ej_id
        doc["titulo"] = doc.get("titulo") or ej_id.replace("-", " ").title()
        doc["unidad"] = unidad
        doc["modulo"] = modulo
        doc["tema"] = tema

        if "subtema" not in doc or not doc["subtema"]:
            doc["subtema"] = inferir_subtema(ej_id, tema, tags_actuales)

        doc["bloom"] = bloom
        doc["dificultad"] = inferir_dificultad(bloom, minutos)
        doc["minutos_estimados"] = minutos
        doc["tipo"] = inferir_tipo(bloom, minutos, tema)

        # Dependencias y tags dep:*
        prerreqs_canónicos = GRAFO_TEMATICO.get(tema, [])
        doc["prerrequisitos"] = prerreqs_canónicos
        nuevos_tags_dep = [f"dep:{p}" for p in prerreqs_canónicos if f"dep:{p}" not in tags_actuales]
        doc["tags"] = tags_actuales + nuevos_tags_dep

        with open(yaml_dest, "w", encoding="utf-8") as f:
            yaml_parser.dump(doc, f)

        migrados.append((dir_origen, dir_destino, ej_id))

    # Reparar symlinks relativos en banco/ si apuntaban a directorios movidos
    for sym in banco_dir.iterdir():
        if sym.is_symlink():
            target_rel = os.readlink(str(sym))
            target_path = banco_dir / target_rel
            if not target_path.exists():
                for sub in banco_dir.iterdir():
                    if sub.is_dir() and (sub / target_rel).is_dir():
                        sym.unlink()
                        sym.symlink_to(f"{sub.name}/{target_rel}")
                        break

    return migrados


def main() -> int:
    parser = argparse.ArgumentParser(description="Clasifica y actualiza ejercicios de temas específicos.")
    parser.add_argument("--temas", nargs="+", required=True, help="Lista de temas a procesar.")
    parser.add_argument("--commit", action="store_true", help="Crear commit semántico tras migrar.")
    parser.add_argument("--banco", type=Path, default=Path("banco"), help="Ruta al banco.")
    args = parser.parse_args()

    temas = args.temas
    print(f"🚀 Iniciando migración y actualización para temas: {', '.join(temas)}...")
    migrados = procesar_ejercicios_de_temas(temas, banco_dir=args.banco)
    print(f"✓ Procesados y clasificados {len(migrados)} ejercicios en banco/<tema>/<id>.")

    if args.commit and migrados:
        msg = f"feat(banco): clasificar y actualizar {len(migrados)} ejercicios de {', '.join(temas)}"
        print(f"💾 Creando commit semántico con flock: {msg}")
        lock_file = ".git_commit.lock"
        # Usar flock para serializar git add y git commit entre agentes concurrentes
        cmd_bash = f'flock {lock_file} -c "git add -A banco/ && git commit -m \'{msg}\'"'
        res = subprocess.run(cmd_bash, shell=True, capture_output=True, text=True)
        if res.returncode == 0:
            print(f"✓ Commit creado exitosamente.")
        else:
            print(f"[!] Warning en commit: {res.stdout} {res.stderr}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
