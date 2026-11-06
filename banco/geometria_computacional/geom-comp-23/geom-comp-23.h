#ifndef GEOM_COMP_23_H
#define GEOM_COMP_23_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool polilinea_autointersecta(const punto2d_t*,size_t);
#endif
