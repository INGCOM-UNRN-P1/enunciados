#ifndef GEOM_COMP_01_H
#define GEOM_COMP_01_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } punto2d_t;
double norma_vectorial(punto2d_t v);
double distancia_euclidiana(punto2d_t a, punto2d_t b);

#endif
