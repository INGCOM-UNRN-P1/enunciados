#ifndef GEOM_COMP_27_H
#define GEOM_COMP_27_H
#include <stdbool.h>
#include <stddef.h>

typedef struct { double x, y; } punto2d_t;
typedef struct {
    punto2d_t centro;
    punto2d_t eje_x; /* unitario, paralelo a un lado mínimo */
    punto2d_t eje_y; /* unitario y perpendicular a eje_x */
    double semiancho;
    double semialto;
    double area;
} obb2d_t;

/* Devuelve false para n=0, punteros inválidos, coordenadas no finitas o fallo
   de reserva. Un punto único produce caja puntual con ejes canónicos; puntos
   colineales producen caja de semialto cero. */
bool caja_obb_minima(const punto2d_t *puntos, size_t n, obb2d_t *salida);
#endif
