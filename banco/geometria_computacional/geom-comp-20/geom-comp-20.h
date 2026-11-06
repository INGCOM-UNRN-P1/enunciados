#ifndef GEOM_COMP_20_H
#define GEOM_COMP_20_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool reflejar_punto_recta(punto2d_t,punto2d_t,punto2d_t,punto2d_t*);
#endif
