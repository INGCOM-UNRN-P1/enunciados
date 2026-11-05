#ifndef EJERCICIO_EJ_14_11_REDIMENSIONAR_ARREGLO_H
#define EJERCICIO_EJ_14_11_REDIMENSIONAR_ARREGLO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Devuelve el bloque redimensionado; ante fallo, arr conserva su validez. */
int *redimensionar_arreglo(int *arr, size_t nuevo_tamano);

#endif /* EJERCICIO_EJ_14_11_REDIMENSIONAR_ARREGLO_H */
