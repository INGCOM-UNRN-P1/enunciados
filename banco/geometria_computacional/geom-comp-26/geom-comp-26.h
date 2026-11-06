#ifndef GEOM_COMP_26_H
#define GEOM_COMP_26_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool asignar_sitios(const punto2d_t*,size_t,const punto2d_t*,size_t,size_t*);
#endif
