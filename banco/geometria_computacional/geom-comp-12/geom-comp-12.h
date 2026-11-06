#ifndef GEOM_COMP_12_H
#define GEOM_COMP_12_H
#include <stdbool.h>
#include <stddef.h>
typedef struct { double x, y; } punto2d_t;
/* Guarda índices del par de menor distancia; false con menos de dos puntos. */
bool par_mas_cercano(const punto2d_t *puntos, size_t n, size_t *indice_a, size_t *indice_b);
#endif
