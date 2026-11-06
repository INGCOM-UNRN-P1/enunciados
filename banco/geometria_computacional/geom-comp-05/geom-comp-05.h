#ifndef GEOM_COMP_05_H
#define GEOM_COMP_05_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } punto2d_t;
bool segmentos_intersectan(punto2d_t a, punto2d_t b, punto2d_t c, punto2d_t d);

#endif
