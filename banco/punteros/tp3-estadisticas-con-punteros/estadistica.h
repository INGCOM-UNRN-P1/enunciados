#ifndef ESTADISTICA_H
#define ESTADISTICA_H

#include <stdbool.h>
#include <stddef.h>
#include "punteros.h"

/* =========================================================================
 * Ejercicio 2: Estadísticas, Promedio y Filtrado por Rango con Punteros
 * =========================================================================
 * Observación de diseño:
 * Recuerden que no está permitido utilizar ALV's (Arreglos de Longitud Variable),
 * pero también, este ejercicio no está pensado para utilizar memoria dinámica.
 *
 * Consigna:
 * El estudiante debe diseñar los prototipos y redactar la documentación Doxygen
 * completa (propósito, precondiciones, postcondiciones, parámetros y retorno)
 * para:
 *
 * 1. calcular_estadisticas: recibe const int *arreglo, size_t cantidad,
 *    y tres punteros de salida: int *minimo, int *maximo y double *promedio.
 *    Debe apoyarse en la función obtener_min_max(...) provista por libpunteros
 *    para obtener los extremos, y calcular el promedio mediante acumulación
 *    con aritmética de punteros pura.
 *    Retorna true si tuvo éxito, o false si algún puntero es NULL o cantidad == 0.
 *
 * 2. contar_en_rango: recibe const int *arreglo, size_t cantidad, int limite_inf,
 *    int limite_sup, y un puntero de salida size_t *coincidencias.
 *    Recorre el arreglo con aritmética de punteros contando cuántos elementos
 *    pertenecen al intervalo cerrado [limite_inf, limite_sup].
 *    Retorna true si calculó el conteo, o false si arreglo o coincidencias son NULL.
 * ========================================================================= */

#endif /* ESTADISTICA_H */
