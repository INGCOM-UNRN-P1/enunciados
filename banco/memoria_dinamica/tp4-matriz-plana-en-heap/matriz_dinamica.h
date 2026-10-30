#ifndef MATRIZ_DINAMICA_H
#define MATRIZ_DINAMICA_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Ejercicio 4: Matriz Dinámica Bidimensional con Bloque Contiguo
 * =========================================================================
 * Consigna:
 * El estudiante debe definir aquí los prototipos, documentación Doxygen
 * completa (propósito, precondiciones, postcondiciones, parámetros y retorno)
 * para:
 *
 * 1. matriz_crear: recibe size_t filas y size_t columnas. Reserva un bloque
 *    contiguo en el heap para (filas * columnas * sizeof(int)) y un arreglo de
 *    punteros (filas * sizeof(int*)) que apuntan al inicio de cada fila.
 *    Retorna el puntero int** o NULL ante error.
 *
 * 2. matriz_destruir: recibe int **matriz. Libera el bloque de datos y el arreglo
 *    de punteros a filas, previniendo memory leaks.
 *
 * 3. matriz_cargar_desde_csv: recibe la ruta de un archivo CSV con valores enteros
 *    separados por coma, lee las dimensiones e inicializa y carga la matriz dinámica.
 *
 * Tarea del estudiante:
 * Diseñar prototipos en este archivo, implementar en matriz_dinamica.c,
 * programa en main.c y pruebas con p1_test en prueba.c.
 * ========================================================================= */

#endif /* MATRIZ_DINAMICA_H */
