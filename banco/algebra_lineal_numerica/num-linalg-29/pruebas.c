#include "num-linalg-29.h"
#include <assert.h>
#include <math.h>
static double parabola(double x){return (x-2.0)*(x-2.0);}
static double nan_func(double x){(void)x;return NAN;}
int main(void) {
    double m=minimizar_seccion_aurea(parabola,0,5,1e-8,200); assert(isfinite(m)&&fabs(m-2)<1e-6);
    assert(isnan(minimizar_seccion_aurea(parabola,1,1,1e-4,100)));
    assert(isnan(minimizar_seccion_aurea(parabola,0,2,0,100)));
    assert(isnan(minimizar_seccion_aurea(nan_func,0,2,1e-4,100)));
    assert(isnan(minimizar_seccion_aurea(parabola,0,5,1e-12,1))); return 0;
}
