#ifndef REGISTRO_CSV_H
#define REGISTRO_CSV_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Ejercicio 5: Arreglo Dinámico de Cadenas (Tokens de CSV) en Heap
 * =========================================================================
 * Consigna:
 * Sin utilizar structs, implementar la tokenización dinámica de una línea CSV:
 *
 * 1. dividir_linea_csv: recibe const char *linea y char delimitador, junto con
 *    un puntero de salida size_t *cantidad_tokens.
 *    Separa la línea en sus diferentes campos, asignando en el heap un arreglo
 *    de punteros a cadena (char **) donde cada elemento apunta a una cadena
 *    clonada en heap con malloc (duplicada con terminador '\0').
 *    Retorna char** o NULL si falla la asignación o la línea es NULL.
 *
 * 2. liberar_arreglo_cadenas: recibe char ***puntero_arreglo y size_t cantidad.
 *    Libera primero cada cadena individual con free, luego libera el arreglo de
 *    punteros, y asigna *puntero_arreglo = NULL.
 *
 * Tarea del estudiante:
 * Diseñar prototipos en este archivo, implementar en registro_csv.c,
 * programa en main.c y pruebas con p1_test en prueba.c.
 * ========================================================================= */

#endif /* REGISTRO_CSV_H */
