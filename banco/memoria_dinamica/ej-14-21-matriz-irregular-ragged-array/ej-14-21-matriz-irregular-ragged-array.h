#ifndef EJERCICIO_EJ_14_21_MATRIZ_IRREGULAR_RAGGED_ARRAY_H
#define EJERCICIO_EJ_14_21_MATRIZ_IRREGULAR_RAGGED_ARRAY_H

#include <stddef.h>
#include <stdbool.h>
typedef struct { size_t filas; size_t *columnas; int **datos; } matriz_irregular_t;
bool matriz_irregular_crear(matriz_irregular_t *m, const size_t *columnas, size_t filas);
void matriz_irregular_liberar(matriz_irregular_t *m);

#endif
