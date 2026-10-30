#ifndef CONSULTA_CSV_H
#define CONSULTA_CSV_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Ejercicio 6: Pipeline de Datos Matricial sin Structs
 * =========================================================================
 * Consigna:
 * Procesar un dataset numérico CSV de N filas por M columnas utilizando
 * matrices dinámicas en heap (int** o bloque contiguo int* con dimensiones
 * gestionadas por parámetros):
 *
 * 1. Cargar una matriz numérica de dimensiones variables desde un archivo CSV.
 * 2. Filtrar filas según una condición (ej: que el valor de la columna C sea mayor a un umbral),
 *    generando una nueva matriz dinámica reducida en el heap.
 * 3. Calcular estadísticas por columna (sumas, promedios) en un arreglo dinámico de floats.
 * 4. Exportar la matriz filtrada a un nuevo archivo CSV.
 * 5. Liberar toda la memoria asignada garantizando 0 fugas de memoria con Valgrind.
 *
 * Tarea del estudiante:
 * Diseñar completamente prototipos en este archivo, implementar en consulta_csv.c,
 * aplicación interactiva en main.c y suite de pruebas en prueba.c.
 * ========================================================================= */

#endif /* CONSULTA_CSV_H */
