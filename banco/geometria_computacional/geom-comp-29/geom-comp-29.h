#ifndef EJERCICIO_GEOM_COMP_29_H
#define EJERCICIO_GEOM_COMP_29_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct {double x,y;} clip_point_t;
typedef struct {double xmin,ymin,xmax,ymax;} clip_rect_t;
bool clip_polygon_sutherland_hodgman(const clip_point_t *in,size_t n,clip_rect_t r,clip_point_t *out,size_t cap,size_t *out_n);
#endif
