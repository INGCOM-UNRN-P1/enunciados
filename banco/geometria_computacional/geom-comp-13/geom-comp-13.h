#ifndef GEOM_COMP_13_H
#define GEOM_COMP_13_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {double min_x,min_y,max_x,max_y;} caja2d_t;
bool calcular_aabb(const punto2d_t*,size_t,caja2d_t*);
#endif
