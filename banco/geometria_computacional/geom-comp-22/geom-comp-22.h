#ifndef GEOM_COMP_22_H
#define GEOM_COMP_22_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

double perimetro_poligono(const punto2d_t*,size_t);
#endif
