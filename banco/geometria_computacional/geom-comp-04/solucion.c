#include "geom-comp-04.h"
#include <math.h>

punto2d_t punto_medio(punto2d_t a,punto2d_t b) { return (punto2d_t){(a.x+b.x)/2.0,(a.y+b.y)/2.0}; }
double distancia_manhattan(punto2d_t a,punto2d_t b) { return fabs(a.x-b.x)+fabs(a.y-b.y); }
