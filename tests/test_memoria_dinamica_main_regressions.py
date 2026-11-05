"""Regresiones de los flujos de consola de los ejercicios 14-20, 24, 25, 28 y 31."""
from __future__ import annotations

import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
BANK = ROOT / "banco" / "memoria_dinamica"


def compile_main(slug: str, directory: Path) -> Path:
    source = BANK / slug / "solucion.c"
    binary = directory / slug
    subprocess.run(
        ["gcc", "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic", str(source), "-o", str(binary)],
        check=True,
        capture_output=True,
        text=True,
    )
    return binary


def test_historial_lee_hasta_eof_y_muestra_ordenado() -> None:
    with tempfile.TemporaryDirectory() as temp:
        binary = compile_main("ej-14-20-historial-de-comandos", Path(temp))
        result = subprocess.run(
            [str(binary)], input="ls\npwd\n", capture_output=True, text=True, check=True
        )
    assert "1: ls" in result.stdout
    assert "2: pwd" in result.stdout


def test_lista_compras_agrega_muestra_y_elimina() -> None:
    entrada = "1\npan\n3\n2\npan\n3\n0\n"
    with tempfile.TemporaryDirectory() as temp:
        binary = compile_main("ej-14-24-lista-de-compras-dinamica", Path(temp))
        result = subprocess.run(
            [str(binary)], input=entrada, capture_output=True, text=True, check=True
        )
    assert result.stdout.count("1. pan") == 1
    assert result.stdout.count("Operación realizada.") == 2


def test_manejo_malloc_informa_error_y_termina_controladamente() -> None:
    slug = "ej-14-25-manejo-de-errores-de-malloc"
    exercise = BANK / slug
    with tempfile.TemporaryDirectory() as temp:
        temp_path = Path(temp)
        obj = temp_path / "solucion.o"
        subprocess.run(
            [
                "gcc", "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic",
                "-Dmain=ejercicio_main", "-c", str(exercise / "solucion.c"), "-o", str(obj),
            ],
            check=True,
            capture_output=True,
            text=True,
        )
        driver = temp_path / "forzar_error.c"
        driver.write_text(
            f'#include "{slug}.h"\nint main(void) {{ (void)reservar_arreglo_o_salir((size_t)-1, 2); return 0; }}\n',
            encoding="utf-8",
        )
        binary = temp_path / "forzar_error"
        subprocess.run(
            ["gcc", "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic", "-I", str(exercise),
             str(driver), str(obj), "-o", str(binary)],
            check=True,
            capture_output=True,
            text=True,
        )
        result = subprocess.run([str(binary)], capture_output=True, text=True)
    assert result.returncode != 0
    assert "no se pudo reservar memoria" in result.stderr


def test_unir_lineas_lee_archivo_y_escribe_una_linea() -> None:
    with tempfile.TemporaryDirectory() as temp:
        temp_path = Path(temp)
        archivo = temp_path / "entrada.txt"
        archivo.write_text("primera\nsegunda\n", encoding="utf-8")
        binary = compile_main("ej-14-28-unir-lineas-de-archivo", temp_path)
        result = subprocess.run(
            [str(binary), str(archivo)], capture_output=True, text=True, check=True
        )
    assert result.stdout == "primera segunda\n"


def test_unir_lineas_usa_stdin_si_no_hay_ruta() -> None:
    with tempfile.TemporaryDirectory() as temp:
        binary = compile_main("ej-14-28-unir-lineas-de-archivo", Path(temp))
        result = subprocess.run(
            [str(binary)], input="A\nB\n", capture_output=True, text=True, check=True
        )
    assert result.stdout == "A B\n"


def test_realloc_null_y_malloc_permiten_el_mismo_acceso() -> None:
    with tempfile.TemporaryDirectory() as temp:
        binary = compile_main("ej-14-31-realloc-con-null", Path(temp))
        result = subprocess.run([str(binary)], capture_output=True, text=True, check=True)
    assert "Los bloques se pueden usar del mismo modo: sí." in result.stdout
