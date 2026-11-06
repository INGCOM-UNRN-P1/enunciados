#ifndef GEOM_COMP_21_H
#define GEOM_COMP_21_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {punto2d_t a,b,c;} triangulo2d_t;
size_t triangular_fan_convexo(const punto2d_t*,size_t,triangulo2d_t*,size_t);
#endif
