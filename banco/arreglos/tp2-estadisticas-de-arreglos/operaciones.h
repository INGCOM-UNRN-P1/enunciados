#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Consigna:
 * Calcular el promedio de los elementos de un arreglo de enteros haciendo uso
 * de la biblioteca libarreglos. Si el arreglo es nulo o la cantidad es 0,
 * debe retornar 0.0.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 * ========================================================================= */
double calcular_promedio(const int arreglo[], size_t cantidad);

/* =========================================================================
 * Consigna:
 * Determinar si un número entero buscado pertenece al arreglo haciendo uso
 * de la función arreglo_buscar de libarreglos.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 * ========================================================================= */
bool contiene_valor(const int arreglo[], size_t cantidad, int valor);

#endif
