#ifndef EJERCICIO_GEOM_COMP_28_H
#define EJERCICIO_GEOM_COMP_28_H
#include <stdbool.h>
#include <stddef.h>

typedef struct {double x,y;} point2d_t;
typedef enum {LINE_UNIQUE=0,LINE_PARALLEL=1,LINE_COINCIDENT=2,LINE_INVALID=3} line_result_t;
line_result_t intersect_parametric_lines(point2d_t p,point2d_t r,point2d_t q,point2d_t s,double eps,point2d_t *out);
#endif
