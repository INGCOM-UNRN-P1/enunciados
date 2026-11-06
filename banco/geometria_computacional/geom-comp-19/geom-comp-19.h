#ifndef GEOM_COMP_19_H
#define GEOM_COMP_19_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool escalar_trasladar(punto2d_t*,size_t,double,double,punto2d_t);
#endif
