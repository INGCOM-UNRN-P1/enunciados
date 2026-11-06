#ifndef GEOM_COMP_04_H
#define GEOM_COMP_04_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } punto2d_t;
punto2d_t punto_medio(punto2d_t a, punto2d_t b);
double distancia_manhattan(punto2d_t a, punto2d_t b);

#endif
