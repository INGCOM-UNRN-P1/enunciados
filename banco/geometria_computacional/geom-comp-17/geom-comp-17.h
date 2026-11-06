#ifndef GEOM_COMP_17_H
#define GEOM_COMP_17_H
#include <stdbool.h>
#include <stddef.h>
typedef struct { double x, y; } punto2d_t;
typedef struct { punto2d_t posicion; double masa; } particula2d_t;
bool centroide_puntos(const punto2d_t *puntos, size_t n, punto2d_t *salida);
bool centro_masa(const particula2d_t *particulas, size_t n, punto2d_t *salida);
#endif
