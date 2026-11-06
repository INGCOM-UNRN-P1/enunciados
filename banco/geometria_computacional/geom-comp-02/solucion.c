#include "geom-comp-02.h"
#include <math.h>

double producto_escalar(vector2d_t a, vector2d_t b) { return a.x*b.x+a.y*b.y; }
bool angulo_entre_vectores(vector2d_t a, vector2d_t b, double *r) {
    if (!r) return false;
    double na=hypot(a.x,a.y), nb=hypot(b.x,b.y);
    if (na==0.0 || nb==0.0) return false;
    double c=producto_escalar(a,b)/(na*nb);
    if (c > 1.0) c = 1.0;
    if (c < -1.0) c = -1.0;
    *r=acos(c); return true;
}
