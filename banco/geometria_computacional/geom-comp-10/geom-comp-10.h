#ifndef GEOM_COMP_10_H
#define GEOM_COMP_10_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct { double x, y; } punto2d_t;
/* Retorna cantidad de vértices antihorarios, sin repetir el primero; 0 si capacidad menor que la envolvente o entrada degenerada. */
size_t envolvente_convexa_graham(const punto2d_t *puntos, size_t n, punto2d_t *salida, size_t capacidad);

#endif
