#ifndef GEOM_COMP_25_H
#define GEOM_COMP_25_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

double hausdorff_discreta(const punto2d_t*,size_t,const punto2d_t*,size_t);
#endif
