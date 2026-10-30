"""Importa al banco de enunciados las prácticas 2026 (guías de ~/dev/p1/ripley/guias).

Fuentes, todas de sólo lectura:
- guías: ~/dev/p1/ripley/guias/<practica>/guia.yaml (+ consigna.md y .ripkg)
- código y consignas: ~/dev/p1/practicas/practicas-2026/<TP>/ (README, .h, .c, prueba.c)
Uso: python importar_practicas_2026.py <enunciados>
"""

from __future__ import annotations

import re
import sys
import zipfile
from pathlib import Path

import yaml

RIPLEY = Path.home() / "dev/p1/ripley/guias"
PRACTICAS = Path.home() / "dev/p1/practicas/practicas-2026"

# (guía ripley, id en la guía) -> nuevo ejercicio del banco.
#   readme: archivo con la consigna; secciones: títulos (prefijo) cuyo cuerpo es la consigna
#   fuente: carpeta con .h / .c / prueba.c; ripkg: paquete de ripley con pistas y casos
#   rol: libreria | uso | concepto
E4 = "entrega_4"
ESPEC = [
    # --- Entrega 4: módulos con Makefile (la solución de la cátedra está en entrega4/solucion)
    *[
        dict(guia=E4, item=f"ejercicio{n}", id=i, tema=t, readme=RIPLEY / E4 / "consigna.md",
             secciones=[f"### Ejercicio {n}:"], fuente=PRACTICAS / f"entrega4/solucion/ejercicios/ejercicio{n}",
             rol="uso", tipo="practica_guiada", entrega="makefile")
        for n, i, t in [
            (1, "e4-primos-y-divisores", "funciones"),
            (2, "e4-sucesion-fibonacci", "recursividad"),
            (3, "e4-factorial-y-combinatoria", "funciones"),
            (4, "e4-mcd-y-mcm", "funciones"),
            (5, "e4-analisis-de-digitos", "aritmetica"),
            (6, "e4-potencia-y-raiz-entera", "lazos"),
            (7, "e4-decimal-y-binario", "aritmetica"),
            (8, "e4-perfectos-deficientes-abundantes", "funciones"),
            (9, "e4-conversion-temperatura", "funciones"),
            (10, "e4-geometria-plana", "funciones"),
        ]
    ],
    # --- TP0: puesta en marcha (sin código salvo el saludo)
    dict(guia="TP0", item="entorno", id="tp0-entorno", tema="entorno_y_git", readme=PRACTICAS / "TP0-2026/README.md",
         secciones=["## Preparativos", "## Instalación", "## Configuración Inicial de Git y GitHub", "## Portabilidad", "## 1: Verificación"],
         rol="concepto", tipo="concepto", entrega="archivos_individuales"),
    dict(guia="TP0", item="saludo", id="tp0-saludo", tema="sintaxis", readme=None, secciones=[],
         fuente=PRACTICAS / "TP0-2026", solucion=PRACTICAS / "TP0-2026/saludo.c",
         texto="Compilar y ejecutar `saludo.c`, el primer programa en C, para comprobar que el compilador del entorno funciona:\n\n```bash\ngcc -std=c11 -Wall -Wextra saludo.c -o saludo\n./saludo\n```\n\nLa salida esperada es `Hola Mundo C!`.\n",
         rol="concepto", tipo="concepto", entrega="archivos_individuales"),
    dict(guia="TP0", item="entrega_1", id="tp0-carga-entrega-1", tema="entorno_y_git", readme=PRACTICAS / "TP0-2026/README.md",
         secciones=["## 2: Código"], pre="Cargar en el directorio `entrega_1` el código fuente de la Práctica 1 (introducción).\n\n",
         rol="concepto", tipo="concepto", entrega="archivos_individuales"),
    dict(guia="TP0", item="entrega_2", id="tp0-carga-entrega-2", tema="entorno_y_git", readme=PRACTICAS / "TP0-2026/README.md",
         secciones=["## 2: Código"], pre="Cargar en el directorio `entrega_2` el código fuente de la Práctica 2 (estructuras de control).\n\n",
         rol="concepto", tipo="concepto", entrega="archivos_individuales"),
    dict(guia="TP0", item="ficha", id="tp0-ficha-del-estudiante", tema="entorno_y_git", readme=PRACTICAS / "TP0-2026/README.md",
         secciones=["## 3: Correo y Github"], post_archivo=PRACTICAS / "TP0-2026/ficha.md",
         rol="concepto", tipo="concepto", entrega="archivos_individuales"),
    # --- TP1
    dict(guia="TP1", item="consola", id="tp1-libconsola", tema="io_formato", readme=PRACTICAS / "TP1-2026/README.md",
         secciones=["### `libs/consola`", "## 3. El Búfer de Entrada"], fuente=PRACTICAS / "TP1-2026/libs/consola",
         ripkg=RIPLEY / "TP1/libs/consola.ripkg", rol="libreria", tipo="practica_guiada", entrega="libreria"),
    *[
        dict(guia="TP1", item=f"ejercicio{n}", id=i, tema=t, readme=PRACTICAS / "TP1-2026/README.md",
             secciones=[f"### `ejercicios/ejercicio{n}`"], fuente=PRACTICAS / f"TP1-2026/ejercicios/ejercicio{n}",
             ripkg=RIPLEY / f"TP1/ejercicios/ejercicio{n}.ripkg", rol="uso", tipo="laboratorio", entrega="makefile")
        for n, i, t in [
            (1, "tp1-conversor-temperatura", "aritmetica"),
            (2, "tp1-estadistica-secuencial", "secuencias"),
            (3, "tp1-validador-de-fechas", "condicionales"),
            (4, "tp1-clasificador-de-triangulos", "condicionales"),
            (5, "tp1-desglose-de-billetes", "aritmetica"),
        ]
    ],
    # --- TP2
    dict(guia="TP2", item="libarreglos", id="tp2-libarreglos", tema="arreglos", readme=PRACTICAS / "TP2-2026/README.md",
         secciones=["## A.Ejercicios en `libarreglos`"], fuente=PRACTICAS / "TP2-2026/libs/arreglos",
         rol="libreria", tipo="practica_guiada", entrega="libreria"),
    dict(guia="TP2", item="libcadenas", id="tp2-libcadenas", tema="cadenas", readme=PRACTICAS / "TP2-2026/README.md",
         secciones=["## Fundamentos de Cadenas Seguras en C", "## B. Ejercicios: `libcadenas`"], fuente=PRACTICAS / "TP2-2026/libs/cadenas",
         rol="libreria", tipo="practica_guiada", entrega="libreria"),
    dict(guia="TP2", item="ejercicio1", id="tp2-estadisticas-de-arreglos", tema="arreglos", readme=None, secciones=[],
         fuente=PRACTICAS / "TP2-2026/ejercicios/ejercicio1", usa="tp2-libarreglos", rol="uso", tipo="laboratorio", entrega="makefile"),
    dict(guia="TP2", item="ejercicio2", id="tp2-procesador-de-texto", tema="cadenas", readme=None, secciones=[],
         fuente=PRACTICAS / "TP2-2026/ejercicios/ejercicio2", usa="tp2-libcadenas", rol="uso", tipo="laboratorio", entrega="makefile"),
    # --- TP3
    dict(guia="TP3", item="libpunteros", id="tp3-libpunteros", tema="punteros", readme=PRACTICAS / "TP3-2026/README.md",
         secciones=["## Introducción", "## 1. Ejercicios de Biblioteca"], fuente=PRACTICAS / "TP3-2026/libs/punteros",
         rol="libreria", tipo="practica_guiada", entrega="libreria"),
    *[
        dict(guia="TP3", item=f"ejercicio{n}", id=i, tema="punteros", readme=PRACTICAS / "TP3-2026/README.md",
             secciones=[f"### Ejercicio {n}:"], fuente=PRACTICAS / f"TP3-2026/ejercicios/ejercicio{n}",
             usa="tp3-libpunteros", rol="uso", tipo="laboratorio", entrega="makefile")
        for n, i in [
            (1, "tp3-ordenar-pares-y-trios"),
            (2, "tp3-estadisticas-con-punteros"),
            (3, "tp3-copia-e-inversion-con-punteros"),
            (4, "tp3-busqueda-y-distancia-de-punteros"),
            (5, "tp3-cadenas-con-punteros"),
            (6, "tp3-seleccion-con-punteros"),
        ]
    ],
    # --- TP4
    dict(guia="TP4", item="libvector", id="tp4-libvector", tema="memoria_dinamica", readme=PRACTICAS / "TP4-2026/README.md",
         secciones=["### Restricciones"], fuente=PRACTICAS / "TP4-2026/libs/vector",
         pre="Biblioteca estática `libvector` de bloques dinámicos de enteros (`int *`, `int **`): tres funciones con prototipo provisto y dos a diseñar sin prototipo previo.\n\n",
         rol="libreria", tipo="practica_guiada", entrega="libreria"),
    dict(guia="TP4", item="libstring", id="tp4-libstring", tema="memoria_dinamica", readme=PRACTICAS / "TP4-2026/README.md",
         secciones=["### Restricciones"], fuente=PRACTICAS / "TP4-2026/libs/string",
         pre="Biblioteca estática `libstring` de cadenas dinámicas en heap (`char *`, `char **`): tres funciones con prototipo provisto y dos a diseñar sin prototipo previo.\n\n",
         rol="libreria", tipo="practica_guiada", entrega="libreria"),
    *[
        dict(guia="TP4", item=f"ejercicio{n}", id=i, tema="memoria_dinamica", readme=PRACTICAS / "TP4-2026/README.md",
             secciones=[f"### Ejercicio {n}:"], fuente=PRACTICAS / f"TP4-2026/ejercicios/ejercicio{n}",
             rol="uso", tipo="laboratorio", entrega="makefile")
        for n, i in [
            (1, "tp4-clonar-y-filtrar-bloques"),
            (2, "tp4-normalizar-cadenas-dinamicas"),
            (3, "tp4-invertir-y-partir-cadenas"),
            (4, "tp4-matriz-plana-en-heap"),
            (5, "tp4-lista-de-cadenas-en-heap"),
            (6, "tp4-texto-dinamico-multilinea"),
        ]
    ],
    # --- TP5
    dict(guia="TP5", item="libdinamicos", id="tp5-libdinamicos", tema="estructuras", readme=PRACTICAS / "TP5-2026/README.md",
         secciones=["### 1. `libdinamicos`"], fuente=PRACTICAS / "TP5-2026/libs/dinamicos",
         rol="libreria", tipo="practica_guiada", entrega="libreria"),
    dict(guia="TP5", item="libcadena_segura", id="tp5-libcadena-segura", tema="estructuras", readme=PRACTICAS / "TP5-2026/README.md",
         secciones=["### 2. `libcadena_segura`"], fuente=PRACTICAS / "TP5-2026/libs/cadena_segura",
         rol="libreria", tipo="practica_guiada", entrega="libreria"),
    dict(guia="TP5", item="ejercicio1", id="tp5-flujo-de-telemetria", tema="estructuras", readme=PRACTICAS / "TP5-2026/README.md",
         secciones=["### Ejercicio 1:"], fuente=PRACTICAS / "TP5-2026/ejercicios/ejercicio1", usa="tp5-libdinamicos",
         rol="uso", tipo="laboratorio", entrega="makefile"),
    dict(guia="TP5", item="ejercicio2", id="tp5-generador-de-slugs", tema="estructuras", readme=PRACTICAS / "TP5-2026/README.md",
         secciones=["### Ejercicio 2:"], fuente=PRACTICAS / "TP5-2026/ejercicios/ejercicio2", usa="tp5-libcadena-segura",
         rol="uso", tipo="laboratorio", entrega="makefile"),
]

# Guías que ya están en el banco: TP6 (tipos_datos_abstractos/ejercicio1…4) y las entregas 1–3.
EXISTENTES = {("TP6", f"ejercicio{n}"): f"ejercicio{n}" for n in range(1, 5)}

CARPETA_GUIA = {"entrega_1": "entrega_1", "entrega_2": "entrega_2", "entrega_4": "entrega_4",
                **{f"TP{n}": f"tp{n}" for n in range(0, 7)}}

DIFICULTAD = {1: "inicial", 2: "inicial", 3: "intermedia", 4: "avanzada", 5: "desafio"}
MEMORIA = {"memoria_dinamica", "estructuras"}


def seccion(texto: str, prefijo: str) -> str:
    """Cuerpo de la sección cuyo título empieza con `prefijo`, hasta el próximo título de igual o mayor nivel."""
    lineas = texto.splitlines()
    for i, linea in enumerate(lineas):
        if linea.startswith(prefijo):
            nivel = len(linea) - len(linea.lstrip("#"))
            cuerpo = []
            for siguiente in lineas[i + 1:]:
                m = re.match(r"^(#+) ", siguiente)
                if m and len(m.group(1)) <= nivel:
                    break
                cuerpo.append(siguiente)
            return "\n".join(cuerpo).strip("\n").rstrip("-\n ")
    raise SystemExit(f"no está la sección «{prefijo}»")


def sin_comentarios(c: str) -> str:
    return re.sub(r"//[^\n]*", "", re.sub(r"/\*.*?\*/", "", c, flags=re.S))


_PROTO = re.compile(r"(?P<doc>/\*\*(?:(?!\*/).)*\*/\s*)?^(?P<firma>[A-Za-z_][\w \t\*]*?[\s\*](?P<nombre>[A-Za-z_]\w*)\s*\((?P<params>[^;{)]*)\)\s*;)",
                    re.S | re.M)


def prototipos(header: str) -> list[dict]:
    """Funciones declaradas en la cabecera, con la primera línea del @brief como descripción."""
    funciones = []
    for m in _PROTO.finditer(header):
        firma = re.sub(r"\s+", " ", m.group("firma"))
        if firma.startswith(("typedef", "return", "#")):
            continue
        nombre = m.group("nombre")
        retorno = firma[: firma.index(nombre)].strip()
        params = re.sub(r"\s+", " ", m.group("params")).strip() or "void"
        brief = re.search(r"@brief\s+([^\n]+)", m.group("doc") or "")
        f = {"nombre": nombre, "retorno": retorno, "parametros": params}
        if brief:
            f["descripcion"] = brief.group(1).strip()
        funciones.append(f)
    return funciones


def contrato(header: str) -> str:
    """Cada prototipo con su comentario de documentación, en el orden de la cabecera."""
    bloques = []
    for m in _PROTO.finditer(header):
        if m.group("firma").lstrip().startswith(("typedef", "return")):
            continue
        bloques.append(((m.group("doc") or "").strip() + "\n" + re.sub(r"[ \t]+\n", "\n", m.group("firma").strip())).strip())
    return "\n\n".join(bloques)


def consignas_de_cabecera(header: str) -> str:
    """Los bloques «Consigna:» de las cabeceras de los TP (cuando el README no tiene la sección)."""
    partes = []
    for bloque in re.findall(r"/\*(.*?)\*/", header, re.S):
        texto = "\n".join(re.sub(r"^\s*\*\s?", "", l) for l in bloque.splitlines())
        m = re.search(r"Consigna:\s*(.*?)(?:Tarea del estudiante:|\Z)", texto, re.S)
        if m:
            partes.append(re.sub(r"=+", "", m.group(1)).strip())
    return "\n\n".join(p for p in partes if p)


def es_solucion(codigo: str) -> bool:
    return "TODO" not in codigo and re.search(r"\)\s*\{", sin_comentarios(codigo)) is not None


def ripkg(ruta: Path | None) -> tuple[list[str], dict[str, bytes]]:
    if not ruta or not ruta.is_file():
        return [], {}
    with zipfile.ZipFile(ruta) as zf:
        nombres = zf.namelist()
        pistas = []
        if "payload/pistas.txt" in nombres:
            for linea in zf.read("payload/pistas.txt").decode("utf-8").splitlines():
                linea = re.sub(r"^\d+\.\s*", "", linea).strip()
                if linea:
                    pistas.append(linea)
        casos = {Path(n).name: zf.read(n) for n in nombres if n.startswith("payload/") and n.endswith((".in", ".out"))}
    return pistas, casos


def temario(enunciados: Path) -> tuple[dict, list]:
    datos = yaml.safe_load((enunciados / "temas.yaml").read_text(encoding="utf-8"))
    return datos["temas"], datos["unidades"]


def importar(enunciados: Path) -> dict[tuple[str, str], str]:
    temas, unidades = temario(enunciados)
    guias = {g: yaml.safe_load((RIPLEY / g / "guia.yaml").read_text(encoding="utf-8")) for g in {e["guia"] for e in ESPEC}}
    mapa: dict[tuple[str, str], str] = dict(EXISTENTES)

    for e in ESPEC:
        item = next(i for i in guias[e["guia"]]["ejercicios"] if i["id"] == e["item"])
        destino = enunciados / "banco" / e["tema"] / e["id"]
        if destino.exists():
            raise SystemExit(f"ya existe {destino}")
        destino.mkdir(parents=True)
        fuente: Path | None = e.get("fuente")

        cabeceras = sorted(fuente.glob("*.h")) if fuente else []
        header = "\n".join(h.read_text(encoding="utf-8") for h in cabeceras)
        for h in cabeceras:
            (destino / h.name).write_text(h.read_text(encoding="utf-8"), encoding="utf-8")

        # Consigna
        texto = e.get("pre", "")
        if e.get("texto"):
            texto += e["texto"]
        if e.get("readme"):
            fuente_md = e["readme"].read_text(encoding="utf-8")
            texto += "\n\n".join(seccion(fuente_md, s) for s in e["secciones"])
        if not e.get("readme") and not e.get("texto"):
            texto += consignas_de_cabecera(header)
        if e.get("post_archivo"):
            texto += "\n\nDatos a completar en la ficha:\n\n```text\n" + e["post_archivo"].read_text(encoding="utf-8").strip() + "\n```"
        if e.get("usa"):
            texto += f"\n\nUsa la biblioteca del ejercicio `{e['usa']}`."
        partes = [texto.strip()]
        if header.strip() and contrato(header):
            partes.append("### 📋 Contrato de las Funciones\n\n```c\n" + contrato(header) + "\n```")
        if e["rol"] != "concepto":
            criterios = [
                "El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.",
                "Pasan todas las pruebas de `prueba.c` (`make test`).",
                "Cada función valida sus precondiciones y documenta su contrato.",
            ]
            if e["tema"] in MEMORIA:
                criterios.append("Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).")
            partes.append("### 🎯 Criterios de Aceptación\n\n" + "\n".join(f"- [ ] {c}" for c in criterios))
        (destino / "enunciado.md").write_text("\n\n".join(partes) + "\n", encoding="utf-8")

        # Solución, pruebas y casos
        solucion = None
        if e.get("solucion"):
            solucion = e["solucion"].read_text(encoding="utf-8")
        elif fuente:
            modulos = [c for c in sorted(fuente.glob("*.c")) if c.name not in ("main.c", "prueba.c")]
            codigos = [c.read_text(encoding="utf-8") for c in modulos]
            if codigos and all(es_solucion(c) for c in codigos):
                solucion = "\n\n".join(codigos)
        if solucion:
            (destino / "solucion.c").write_text(solucion, encoding="utf-8")
        if fuente and (fuente / "prueba.c").is_file():
            (destino / "prueba.c").write_text((fuente / "prueba.c").read_text(encoding="utf-8"), encoding="utf-8")
        pistas, casos = ripkg(e.get("ripkg"))
        if casos:
            (destino / "tests").mkdir()
            for nombre, datos in sorted(casos.items()):
                (destino / "tests" / nombre).write_bytes(datos)

        # Metadatos
        requisitos = list(temas.get(e["tema"], {}).get("requiere") or [])
        unidad = next((n for n, u in enumerate(unidades, 1) if e["tema"] in u["temas"]), None)
        practica = CARPETA_GUIA[e["guia"]].replace("_", "-")
        meta = {
            "id": e["id"],
            "titulo": item.get("titulo") or e["id"],
            "tema": e["tema"],
            "bloom": int(item["bloom"]),
            "minutos_estimados": int(item["minutos"]),
            "pistas": pistas,
            "tags": [practica, "cursada-2026", e["tema"]] + [f"dep:{r}" for r in requisitos],
            "verificado": False,
            "funciones": prototipos(header),
            "tipo_entrega": e["entrega"],
            "familia": f"{practica}-2026",
            "rol_familia": e["rol"] if e["rol"] != "concepto" else None,
            "dependencias": [e["usa"]] if e.get("usa") else [],
            "unidad": unidad,
            "modulo": unidades[unidad - 1]["titulo"].split(": ", 1)[-1] if unidad else None,
            "dificultad": DIFICULTAD[int(item["bloom"])],
            "tipo": e["tipo"],
            "prerrequisitos": requisitos,
        }
        if not meta["titulo"] or meta["titulo"] == e["id"]:
            raise SystemExit(f"{e['id']}: la guía no trae título")
        meta = {k: v for k, v in meta.items() if v not in (None, [], "")}
        (destino / "ejercicio.yaml").write_text(yaml.safe_dump(meta, allow_unicode=True, sort_keys=False, width=100), encoding="utf-8")
        mapa[(e["guia"], e["item"])] = e["id"]
    return mapa


def escribir_guias(enunciados: Path, mapa: dict[tuple[str, str], str]) -> None:
    for g, carpeta in CARPETA_GUIA.items():
        datos = yaml.safe_load((RIPLEY / g / "guia.yaml").read_text(encoding="utf-8"))
        items = []
        for item in datos["ejercicios"]:
            bid = mapa.get((g, item["id"]), item["id"])  # entregas 1–2: mismos ids que el banco
            nuevo = {"id": bid}
            if bid != item["id"]:
                nuevo["id_practica"] = item["id"]  # id en la guía de ripley (la carpeta en el repo del TP)
            for k in ("titulo", "minutos", "bloom", "tema", "subpuntos"):
                if k in item:
                    nuevo[k] = item[k]
            items.append(nuevo)
        guia = {k: datos[k] for k in ("nombre", "identificador", "moodle_id", "tipo_entrega", "minutos_totales", "temas", "distribucion_bloom") if k in datos}
        guia.setdefault("identificador", carpeta.replace("_", "-"))
        guia["cursada"] = 2026
        guia["ejercicios"] = items
        dir_g = enunciados / "guias" / carpeta
        dir_g.mkdir(parents=True, exist_ok=True)
        (dir_g / "guia.yaml").write_text(yaml.safe_dump(guia, allow_unicode=True, sort_keys=False, width=100), encoding="utf-8")


if __name__ == "__main__":
    raiz = Path(sys.argv[1])
    escribir_guias(raiz, importar(raiz))
