#ifndef GEOM_COMP_08_H
#define GEOM_COMP_08_H
#include <stdbool.h>
#include <stddef.h>
#include <math.h>

typedef struct { double x, y; } punto2d_t;
/* El borde cuenta como interior. */
bool punto_en_poligono(punto2d_t p, const punto2d_t *vertices, size_t n);

#endif
