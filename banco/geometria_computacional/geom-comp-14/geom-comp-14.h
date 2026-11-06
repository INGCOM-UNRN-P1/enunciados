#ifndef GEOM_COMP_14_H
#define GEOM_COMP_14_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {double min_x,min_y,max_x,max_y;} caja2d_t;
bool aabb_intersectan(caja2d_t,caja2d_t);
#endif
