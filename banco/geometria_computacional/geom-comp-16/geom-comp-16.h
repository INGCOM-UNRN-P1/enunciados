#ifndef GEOM_COMP_16_H
#define GEOM_COMP_16_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {punto2d_t centro;double radio;} circulo2d_t;
bool segmento_circulo_intersecta(punto2d_t,punto2d_t,circulo2d_t);
#endif
