#include "geom-comp-01.h"
#include <math.h>

double norma_vectorial(punto2d_t v) { return hypot(v.x, v.y); }
double distancia_euclidiana(punto2d_t a, punto2d_t b) { return hypot(a.x-b.x, a.y-b.y); }
