#ifndef GEOM_COMP_07_H
#define GEOM_COMP_07_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } punto2d_t;
double area_poligono(const punto2d_t *vertices, size_t n);

#endif
