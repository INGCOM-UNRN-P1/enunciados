#ifndef EJERCICIO_EJ_21_21_PRODUCTO_DE_HADAMARD_H
#define EJERCICIO_EJ_21_21_PRODUCTO_DE_HADAMARD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Calcula el producto elemento a elemento en arreglos contiguos row-major.
 * Retorna false ante punteros nulos o dimensiones inválidas. */
bool producto_hadamard(const int *a, const int *b, size_t filas, size_t columnas,
                       int64_t *resultado);

#endif /* EJERCICIO_EJ_21_21_PRODUCTO_DE_HADAMARD_H */
