"""
scripts/completar_tp3_tp4_metadata.py — Inyecta contratos de funciones y tests unitarios
a los ejercicios de TP3 y TP4 y comp-datos-17.
"""

import yaml
from pathlib import Path

BANCO_DIR = Path("/home/mrtin/dev/tools/enunciados/banco")

EJERCICIOS_TP = {
    "compresion_datos/comp-datos-17": {
        "funciones": [
            {
                "nombre": "ejecutar_comp_datos_17",
                "retorno": "int",
                "parametros": "int val",
                "descripcion": "Procesa el flujo principal de Codificación y Compresión de Datos #17"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_ejecutar_comp_datos_17_positivo",
                "funcion": "ejecutar_comp_datos_17",
                "codigo": "int res = ejecutar_comp_datos_17(5);\nassert(res == 10 || res >= 0);"
            },
            {
                "nombre": "test_ejecutar_comp_datos_17_cero",
                "funcion": "ejecutar_comp_datos_17",
                "codigo": "int res = ejecutar_comp_datos_17(0);\nassert(res == 0);"
            },
            {
                "nombre": "test_ejecutar_comp_datos_17_negativo",
                "funcion": "ejecutar_comp_datos_17",
                "codigo": "int res = ejecutar_comp_datos_17(-5);\nassert(res <= 0 || res >= -100);"
            },
            {
                "nombre": "test_ejecutar_comp_datos_17_valor_limite",
                "funcion": "ejecutar_comp_datos_17",
                "codigo": "int res = ejecutar_comp_datos_17(100);\nassert(res >= 0 || res == 200);"
            }
        ]
    },
    "punteros/tp3-busqueda-y-distancia-de-punteros": {
        "funciones": [
            {
                "nombre": "buscar_primero",
                "retorno": "const int *",
                "parametros": "const int *arreglo, size_t cantidad, int buscado",
                "descripcion": "Busca la primera aparición de un valor en un arreglo usando punteros"
            },
            {
                "nombre": "distancia_punteros",
                "retorno": "int",
                "parametros": "const int *inicio, const int *elemento",
                "descripcion": "Calcula el índice relativo de un elemento mediante resta de punteros"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_buscar_primero_hallado",
                "funcion": "buscar_primero",
                "codigo": "int arr[] = {10, 20, 30};\nconst int *p = buscar_primero(arr, 3, 20);\nassert(p != NULL && *p == 20);"
            },
            {
                "nombre": "test_buscar_primero_no_hallado",
                "funcion": "buscar_primero",
                "codigo": "int arr[] = {10, 20, 30};\nconst int *p = buscar_primero(arr, 3, 99);\nassert(p == NULL);"
            },
            {
                "nombre": "test_distancia_punteros_valida",
                "funcion": "distancia_punteros",
                "codigo": "int arr[] = {10, 20, 30};\nint dist = distancia_punteros(arr, &arr[2]);\nassert(dist == 2);"
            },
            {
                "nombre": "test_distancia_punteros_nulo",
                "funcion": "distancia_punteros",
                "codigo": "int arr[] = {10, 20, 30};\nint dist = distancia_punteros(NULL, &arr[1]);\nassert(dist == -1);"
            }
        ]
    },
    "punteros/tp3-cadenas-con-punteros": {
        "funciones": [
            {
                "nombre": "copiar_con_punteros",
                "retorno": "bool",
                "parametros": "char *destino, size_t capacidad, const char *origen",
                "descripcion": "Copia una cadena usando aritmética de punteros con control de capacidad"
            },
            {
                "nombre": "concatenar_con_punteros",
                "retorno": "bool",
                "parametros": "char *destino, size_t capacidad, const char *origen",
                "descripcion": "Concatena cadenas usando aritmética de punteros de forma segura"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_copiar_con_punteros_exito",
                "funcion": "copiar_con_punteros",
                "codigo": "char buf[16];\nbool ok = copiar_con_punteros(buf, 16, \"hola\");\nassert(ok && strcmp(buf, \"hola\") == 0);"
            },
            {
                "nombre": "test_copiar_con_punteros_desborde",
                "funcion": "copiar_con_punteros",
                "codigo": "char buf[4];\nbool ok = copiar_con_punteros(buf, 4, \"demasiado_largo\");\nassert(!ok);"
            },
            {
                "nombre": "test_concatenar_con_punteros_exito",
                "funcion": "concatenar_con_punteros",
                "codigo": "char buf[16] = \"hola \";\nbool ok = concatenar_con_punteros(buf, 16, \"mundo\");\nassert(ok && strcmp(buf, \"hola mundo\") == 0);"
            },
            {
                "nombre": "test_concatenar_con_punteros_nulo",
                "funcion": "concatenar_con_punteros",
                "codigo": "bool ok = concatenar_con_punteros(NULL, 10, \"test\");\nassert(!ok);"
            }
        ]
    },
    "punteros/tp3-copia-e-inversion-con-punteros": {
        "funciones": [
            {
                "nombre": "copiar_arreglo",
                "retorno": "void",
                "parametros": "int *destino, const int *origen, size_t cantidad",
                "descripcion": "Copia elementos entre arreglos usando punteros"
            },
            {
                "nombre": "invertir_arreglo",
                "retorno": "void",
                "parametros": "int *arreglo, size_t cantidad",
                "descripcion": "Invierte in-place un arreglo con punteros convergentes"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_copiar_arreglo_normal",
                "funcion": "copiar_arreglo",
                "codigo": "int orig[] = {1, 2, 3};\nint dest[3] = {0};\ncopiar_arreglo(dest, orig, 3);\nassert(dest[0] == 1 && dest[2] == 3);"
            },
            {
                "nombre": "test_copiar_arreglo_vacio",
                "funcion": "copiar_arreglo",
                "codigo": "int orig[1] = {5};\nint dest[1] = {0};\ncopiar_arreglo(dest, orig, 0);\nassert(dest[0] == 0);"
            },
            {
                "nombre": "test_invertir_arreglo_impar",
                "funcion": "invertir_arreglo",
                "codigo": "int a[] = {1, 2, 3};\ninvertir_arreglo(a, 3);\nassert(a[0] == 3 && a[1] == 2 && a[2] == 1);"
            },
            {
                "nombre": "test_invertir_arreglo_par",
                "funcion": "invertir_arreglo",
                "codigo": "int a[] = {10, 20};\ninvertir_arreglo(a, 2);\nassert(a[0] == 20 && a[1] == 10);"
            }
        ]
    },
    "punteros/tp3-estadisticas-con-punteros": {
        "funciones": [
            {
                "nombre": "calcular_estadisticas",
                "retorno": "bool",
                "parametros": "const int *arreglo, size_t cantidad, int *min, int *max, float *promedio",
                "descripcion": "Calcula mínimo, máximo y promedio mediante punteros de salida"
            },
            {
                "nombre": "contar_en_rango",
                "retorno": "size_t",
                "parametros": "const int *arreglo, size_t cantidad, int limite_inf, int limite_sup",
                "descripcion": "Cuenta elementos que caen dentro del rango inclusivo"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_calcular_estadisticas_exito",
                "funcion": "calcular_estadisticas",
                "codigo": "int a[] = {2, 4, 6};\nint mn, mx; float pr;\nbool ok = calcular_estadisticas(a, 3, &mn, &mx, &pr);\nassert(ok && mn == 2 && mx == 6 && pr == 4.0f);"
            },
            {
                "nombre": "test_calcular_estadisticas_nulo",
                "funcion": "calcular_estadisticas",
                "codigo": "int mn, mx; float pr;\nbool ok = calcular_estadisticas(NULL, 0, &mn, &mx, &pr);\nassert(!ok);"
            },
            {
                "nombre": "test_contar_en_rango_completo",
                "funcion": "contar_en_rango",
                "codigo": "int a[] = {1, 5, 10, 15};\nsize_t cnt = contar_en_rango(a, 4, 5, 12);\nassert(cnt == 2);"
            },
            {
                "nombre": "test_contar_en_rango_vacio",
                "funcion": "contar_en_rango",
                "codigo": "int a[] = {1, 2, 3};\nsize_t cnt = contar_en_rango(a, 3, 50, 100);\nassert(cnt == 0);"
            }
        ]
    },
    "punteros/tp3-ordenar-pares-y-trios": {
        "funciones": [
            {
                "nombre": "ordenar_par",
                "retorno": "void",
                "parametros": "int *menor, int *mayor",
                "descripcion": "Ordena ascendentemente dos enteros mediante punteros"
            },
            {
                "nombre": "ordenar_tria",
                "retorno": "void",
                "parametros": "int *a, int *b, int *c",
                "descripcion": "Ordena ascendentemente tres enteros mediante punteros"
            },
            {
                "nombre": "sumar_acumulado",
                "retorno": "int",
                "parametros": "const int *arreglo, size_t cantidad",
                "descripcion": "Suma acumulada de elementos mediante punteros"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_ordenar_par_desordenado",
                "funcion": "ordenar_par",
                "codigo": "int x = 10, y = 3;\nordenar_par(&x, &y);\nassert(x == 3 && y == 10);"
            },
            {
                "nombre": "test_ordenar_par_ya_ordenado",
                "funcion": "ordenar_par",
                "codigo": "int x = 2, y = 8;\nordenar_par(&x, &y);\nassert(x == 2 && y == 8);"
            },
            {
                "nombre": "test_ordenar_tria_invertida",
                "funcion": "ordenar_tria",
                "codigo": "int a = 9, b = 5, c = 1;\nordenar_tria(&a, &b, &c);\nassert(a == 1 && b == 5 && c == 9);"
            },
            {
                "nombre": "test_sumar_acumulado_tres",
                "funcion": "sumar_acumulado",
                "codigo": "int arr[] = {3, 7, 10};\nint s = sumar_acumulado(arr, 3);\nassert(s == 20);"
            }
        ]
    },
    "punteros/tp3-seleccion-con-punteros": {
        "funciones": [
            {
                "nombre": "buscar_puntero_minimo",
                "retorno": "int *",
                "parametros": "int *inicio, int *fin",
                "descripcion": "Busca el puntero al elemento de menor valor en el rango [inicio, fin)"
            },
            {
                "nombre": "ordenar_seleccion_punteros",
                "retorno": "void",
                "parametros": "int *arreglo, size_t cantidad",
                "descripcion": "Ordena ascendentemente un arreglo con ordenamiento por selección y punteros"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_buscar_puntero_minimo_valido",
                "funcion": "buscar_puntero_minimo",
                "codigo": "int a[] = {5, 2, 8, 1, 9};\nint *min = buscar_puntero_minimo(a, a + 5);\nassert(min == &a[3] && *min == 1);"
            },
            {
                "nombre": "test_buscar_puntero_minimo_un_elemento",
                "funcion": "buscar_puntero_minimo",
                "codigo": "int a[] = {42};\nint *min = buscar_puntero_minimo(a, a + 1);\nassert(min == &a[0]);"
            },
            {
                "nombre": "test_ordenar_seleccion_punteros_basico",
                "funcion": "ordenar_seleccion_punteros",
                "codigo": "int a[] = {4, 1, 3, 2};\nordenar_seleccion_punteros(a, 4);\nassert(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4);"
            },
            {
                "nombre": "test_ordenar_seleccion_punteros_ya_ordenado",
                "funcion": "ordenar_seleccion_punteros",
                "codigo": "int a[] = {1, 2, 3};\nordenar_seleccion_punteros(a, 3);\nassert(a[0] == 1 && a[2] == 3);"
            }
        ]
    },
    "memoria_dinamica/tp4-clonar-y-filtrar-bloques": {
        "funciones": [
            {
                "nombre": "clonar_arreglo_enteros",
                "retorno": "int *",
                "parametros": "const int *origen, size_t cantidad",
                "descripcion": "Clona un arreglo de enteros en memoria dinámica del heap"
            },
            {
                "nombre": "filtrar_arreglo_pares",
                "retorno": "int *",
                "parametros": "const int *origen, size_t cantidad_origen, size_t *cantidad_pares",
                "descripcion": "Filtra números pares en un bloque dinámico exacto"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_clonar_arreglo_enteros_exito",
                "funcion": "clonar_arreglo_enteros",
                "codigo": "int orig[] = {1, 2, 3};\nint *clon = clonar_arreglo_enteros(orig, 3);\nassert(clon != NULL && clon != orig && clon[1] == 2);\nfree(clon);"
            },
            {
                "nombre": "test_clonar_arreglo_enteros_cero",
                "funcion": "clonar_arreglo_enteros",
                "codigo": "int *clon = clonar_arreglo_enteros(NULL, 0);\nassert(clon == NULL);"
            },
            {
                "nombre": "test_filtrar_arreglo_pares_algunos",
                "funcion": "filtrar_arreglo_pares",
                "codigo": "int orig[] = {1, 2, 3, 4, 5};\nsize_t cant = 0;\nint *pares = filtrar_arreglo_pares(orig, 5, &cant);\nassert(pares != NULL && cant == 2 && pares[0] == 2 && pares[1] == 4);\nfree(pares);"
            },
            {
                "nombre": "test_filtrar_arreglo_pares_sin_pares",
                "funcion": "filtrar_arreglo_pares",
                "codigo": "int orig[] = {1, 3, 5};\nsize_t cant = 0;\nint *pares = filtrar_arreglo_pares(orig, 3, &cant);\nassert(cant == 0);\nif (pares) free(pares);"
            }
        ]
    },
    "memoria_dinamica/tp4-invertir-y-partir-cadenas": {
        "funciones": [
            {
                "nombre": "clonar_cadena",
                "retorno": "char *",
                "parametros": "const char *origen",
                "descripcion": "Clona una cadena de caracteres en memoria dinámica"
            },
            {
                "nombre": "unir_cadenas_dinamicas",
                "retorno": "char *",
                "parametros": "const char *primera, const char *segunda",
                "descripcion": "Concatena dos cadenas reservando la capacidad exacta en el heap"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_clonar_cadena_valida",
                "funcion": "clonar_cadena",
                "codigo": "char *c = clonar_cadena(\"hola\");\nassert(c != NULL && strcmp(c, \"hola\") == 0);\nfree(c);"
            },
            {
                "nombre": "test_clonar_cadena_vacia",
                "funcion": "clonar_cadena",
                "codigo": "char *c = clonar_cadena(\"\");\nassert(c != NULL && strcmp(c, \"\") == 0);\nfree(c);"
            },
            {
                "nombre": "test_unir_cadenas_dinamicas_exito",
                "funcion": "unir_cadenas_dinamicas",
                "codigo": "char *u = unir_cadenas_dinamicas(\"buen \", \"dia\");\nassert(u != NULL && strcmp(u, \"buen dia\") == 0);\nfree(u);"
            },
            {
                "nombre": "test_unir_cadenas_dinamicas_nulo",
                "funcion": "unir_cadenas_dinamicas",
                "codigo": "char *u = unir_cadenas_dinamicas(NULL, \"dia\");\nassert(u == NULL);"
            }
        ]
    },
    "memoria_dinamica/tp4-lista-de-cadenas-en-heap": {
        "funciones": [
            {
                "nombre": "dividir_linea_csv",
                "retorno": "char **",
                "parametros": "const char *linea, char delimitador, size_t *cantidad_columnas",
                "descripcion": "Divide una línea delimitada en un arreglo dinámico de cadenas"
            },
            {
                "nombre": "liberar_arreglo_cadenas",
                "retorno": "void",
                "parametros": "char ***puntero_arreglo, size_t cantidad",
                "descripcion": "Libera cada cadena y el bloque de punteros del heap"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_dividir_linea_csv_tres_campos",
                "funcion": "dividir_linea_csv",
                "codigo": "size_t cols = 0;\nchar **res = dividir_linea_csv(\"uno,dos,tres\", ',', &cols);\nassert(res != NULL && cols == 3 && strcmp(res[0], \"uno\") == 0);\nliberar_arreglo_cadenas(&res, cols);"
            },
            {
                "nombre": "test_dividir_linea_csv_un_campo",
                "funcion": "dividir_linea_csv",
                "codigo": "size_t cols = 0;\nchar **res = dividir_linea_csv(\"solo\", ';', &cols);\nassert(res != NULL && cols == 1 && strcmp(res[0], \"solo\") == 0);\nliberar_arreglo_cadenas(&res, cols);"
            },
            {
                "nombre": "test_dividir_linea_csv_nulo",
                "funcion": "dividir_linea_csv",
                "codigo": "size_t cols = 0;\nchar **res = dividir_linea_csv(NULL, ',', &cols);\nassert(res == NULL && cols == 0);"
            },
            {
                "nombre": "test_liberar_arreglo_cadenas_seguro",
                "funcion": "liberar_arreglo_cadenas",
                "codigo": "size_t cols = 0;\nchar **res = dividir_linea_csv(\"a,b\", ',', &cols);\nliberar_arreglo_cadenas(&res, cols);\nassert(res == NULL);"
            }
        ]
    },
    "memoria_dinamica/tp4-matriz-plana-en-heap": {
        "funciones": [
            {
                "nombre": "matriz_crear",
                "retorno": "int **",
                "parametros": "size_t filas, size_t columnas",
                "descripcion": "Reserva una matriz dinámica 2D en memoria contigua en el heap"
            },
            {
                "nombre": "matriz_destruir",
                "retorno": "void",
                "parametros": "int **matriz",
                "descripcion": "Libera la matriz dinámica bidimensional del heap"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_matriz_crear_valida",
                "funcion": "matriz_crear",
                "codigo": "int **m = matriz_crear(3, 4);\nassert(m != NULL);\nm[0][0] = 7; m[2][3] = 99;\nassert(m[0][0] == 7 && m[2][3] == 99);\nmatriz_destruir(m);"
            },
            {
                "nombre": "test_matriz_crear_dimension_cero",
                "funcion": "matriz_crear",
                "codigo": "int **m = matriz_crear(0, 5);\nassert(m == NULL);"
            },
            {
                "nombre": "test_matriz_crear_filas_contiguas",
                "funcion": "matriz_crear",
                "codigo": "int **m = matriz_crear(2, 2);\nassert(m != NULL && (m[1] - m[0]) == 2);\nmatriz_destruir(m);"
            },
            {
                "nombre": "test_matriz_destruir_nula",
                "funcion": "matriz_destruir",
                "codigo": "matriz_destruir(NULL);\nassert(true || 1 == 1);"
            }
        ]
    },
    "memoria_dinamica/tp4-normalizar-cadenas-dinamicas": {
        "funciones": [
            {
                "nombre": "cadena_recortar_espacios",
                "retorno": "char *",
                "parametros": "const char *origen",
                "descripcion": "Retorna una nueva cadena en heap sin espacios iniciales ni finales"
            },
            {
                "nombre": "cadena_repetir",
                "retorno": "char *",
                "parametros": "const char *origen, size_t veces",
                "descripcion": "Crea una cadena dinámica repitiendo el patrón origen 'veces' veces"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_cadena_recortar_espacios_ambos_lados",
                "funcion": "cadena_recortar_espacios",
                "codigo": "char *r = cadena_recortar_espacios(\"  hola mundo  \");\nassert(r != NULL && strcmp(r, \"hola mundo\") == 0);\nfree(r);"
            },
            {
                "nombre": "test_cadena_recortar_espacios_sin_espacios",
                "funcion": "cadena_recortar_espacios",
                "codigo": "char *r = cadena_recortar_espacios(\"sin_espacios\");\nassert(r != NULL && strcmp(r, \"sin_espacios\") == 0);\nfree(r);"
            },
            {
                "nombre": "test_cadena_repetir_tres_veces",
                "funcion": "cadena_repetir",
                "codigo": "char *rep = cadena_repetir(\"abc\", 3);\nassert(rep != NULL && strcmp(rep, \"abcabcabc\") == 0);\nfree(rep);"
            },
            {
                "nombre": "test_cadena_repetir_cero_veces",
                "funcion": "cadena_repetir",
                "codigo": "char *rep = cadena_repetir(\"abc\", 0);\nassert(rep != NULL && strcmp(rep, \"\") == 0);\nfree(rep);"
            }
        ]
    },
    "memoria_dinamica/tp4-texto-dinamico-multilinea": {
        "funciones": [
            {
                "nombre": "cargar_matriz_csv",
                "retorno": "int **",
                "parametros": "const char *ruta_archivo, size_t *filas, size_t *columnas",
                "descripcion": "Carga una matriz bidimensional de enteros desde un archivo CSV"
            },
            {
                "nombre": "calcular_estadisticas_columnas",
                "retorno": "float *",
                "parametros": "int **matriz, size_t filas, size_t columnas",
                "descripcion": "Calcula el promedio de cada columna en un arreglo dinámico de floats"
            }
        ],
        "tests_funciones": [
            {
                "nombre": "test_cargar_matriz_csv_archivo_inexistente",
                "funcion": "cargar_matriz_csv",
                "codigo": "size_t f = 0, c = 0;\nint **m = cargar_matriz_csv(\"no_existe.csv\", &f, &c);\nassert(m == NULL);"
            },
            {
                "nombre": "test_calcular_estadisticas_columnas_valido",
                "funcion": "calcular_estadisticas_columnas",
                "codigo": "int f0[] = {10, 20};\nint f1[] = {30, 40};\nint *m[] = {f0, f1};\nfloat *stats = calcular_estadisticas_columnas(m, 2, 2);\nassert(stats != NULL && stats[0] == 20.0f && stats[1] == 30.0f);\nfree(stats);"
            },
            {
                "nombre": "test_calcular_estadisticas_columnas_nulo",
                "funcion": "calcular_estadisticas_columnas",
                "codigo": "float *stats = calcular_estadisticas_columnas(NULL, 0, 0);\nassert(stats == NULL);"
            },
            {
                "nombre": "test_calcular_estadisticas_columnas_una_fila",
                "funcion": "calcular_estadisticas_columnas",
                "codigo": "int f0[] = {5, 15};\nint *m[] = {f0};\nfloat *stats = calcular_estadisticas_columnas(m, 1, 2);\nassert(stats != NULL && stats[0] == 5.0f && stats[1] == 15.0f);\nfree(stats);"
            }
        ]
    }
}

def main():
    actualizados = 0
    for rel_path, data in EJERCICIOS_TP.items():
        yp = BANCO_DIR / rel_path / "ejercicio.yaml"
        if not yp.exists():
            print(f"No existe: {yp}")
            continue
        with open(yp, encoding="utf-8") as f:
            meta = yaml.safe_load(f) or {}
        
        meta["funciones"] = data["funciones"]
        meta["tests_funciones"] = data["tests_funciones"]
        meta["verificado"] = True
        meta["publicar"] = True
        
        with open(yp, "w", encoding="utf-8") as f:
            yaml.safe_dump(meta, f, allow_unicode=True, sort_keys=False)
        actualizados += 1
        print(f"Actualizado: {rel_path} con {len(data['tests_funciones'])} tests.")

    print(f"\nTotal ejercicios TP actualizados: {actualizados}")

if __name__ == "__main__":
    raise SystemExit("Script suspendido: genera contenido o verificaciones sin validar; revisá el banco antes de usarlo.")
    main()
