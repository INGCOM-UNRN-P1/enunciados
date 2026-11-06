#ifndef GEOM_COMP_15_H
#define GEOM_COMP_15_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {punto2d_t centro;double radio;} circulo2d_t;
bool circulos_intersectan(circulo2d_t,circulo2d_t);
#endif
