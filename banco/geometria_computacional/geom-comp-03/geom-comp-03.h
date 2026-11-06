#ifndef GEOM_COMP_03_H
#define GEOM_COMP_03_H
#include <stdbool.h>
#include <stddef.h>

typedef struct { double x, y; } punto2d_t;
typedef enum { COLINEAL=0, GIRO_ANTIHORARIO=1, GIRO_HORARIO=-1 } orientacion_t;
double producto_vectorial_2d(punto2d_t a, punto2d_t b);
orientacion_t orientacion(punto2d_t a, punto2d_t b, punto2d_t c);

#endif
