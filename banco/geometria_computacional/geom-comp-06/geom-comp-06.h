#ifndef GEOM_COMP_06_H
#define GEOM_COMP_06_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } punto2d_t;
double distancia_punto_segmento(punto2d_t p, punto2d_t a, punto2d_t b);

#endif
