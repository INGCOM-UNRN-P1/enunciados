#ifndef GEOM_COMP_02_H
#define GEOM_COMP_02_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } vector2d_t;
double producto_escalar(vector2d_t a, vector2d_t b);
bool angulo_entre_vectores(vector2d_t a, vector2d_t b, double *radianes);

#endif
