#ifndef INTERCAMBIO_H
#define INTERCAMBIO_H

#include <stdbool.h>
#include <stddef.h>
#include "punteros.h"

/* =========================================================================
 * Ejercicio 1: Ordenamiento de Pares, Tríos y Acumulación por Referencia
 * =========================================================================
 * Consigna:
 * El estudiante debe definir aquí los prototipos y documentación Doxygen
 * completa (propósito, precondiciones, postcondiciones, parámetros y retorno)
 * para:
 *
 * 1. ordenar_par: recibe dos punteros a entero (int *menor, int *mayor).
 *    Asegura que la posición apuntada por 'menor' contenga un valor menor o
 *    igual que la apuntada por 'mayor'.
 *    Debe apoyarse obligatoriamente en la función intercambiar(...) de libpunteros.
 *
 * 2. ordenar_tria: recibe tres punteros a entero (int *a, int *b, int *c).
 *    Ordena los tres valores de modo que queden ordenados ascendentemente (*a <= *b <= *c).
 *    Debe resolverse mediante llamadas sucesivas a ordenar_par e intercambiar.
 *    Si alguno de los tres punteros es NULL, no produce efecto.
 *
 * 3. sumar_acumulado: recibe un arreglo de enteros (const int *arreglo, size_t cantidad)
 *    y un puntero de salida (long long *resultado).
 *    Calcula la suma acumulada de los elementos recorriéndolos estrictamente
 *    con aritmética de punteros y almacena el total en la dirección apuntada por
 *    'resultado'. Retorna true si pudo efectuar el cálculo, o false si arreglo o
 *    resultado son NULL.
 * ========================================================================= */

#endif /* INTERCAMBIO_H */
