#ifndef GEOM_COMP_09_H
#define GEOM_COMP_09_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } punto2d_t;
/* Ignora giros colineales; devuelve false si es degenerado o no convexo. */
bool poligono_es_convexo(const punto2d_t *vertices, size_t n);

#endif
