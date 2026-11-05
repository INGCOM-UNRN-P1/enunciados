#ifndef EJERCICIO_EJ_14_30_MATRIZ_DINAMICA_EN_BLOQUE_CONT_H
#define EJERCICIO_EJ_14_30_MATRIZ_DINAMICA_EN_BLOQUE_CONT_H

#include <stddef.h>
#include <stdbool.h>
typedef struct { size_t filas, columnas; int **datos; int *bloque; } matriz_t;
bool matriz_crear_filas(matriz_t *m, size_t filas, size_t columnas);
bool matriz_crear_contigua(matriz_t *m, size_t filas, size_t columnas);
void matriz_liberar(matriz_t *m);

#endif
