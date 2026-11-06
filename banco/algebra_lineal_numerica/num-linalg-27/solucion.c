#include "num-linalg-27.h"
#include <math.h>
double evaluar_horner(const double *a, size_t n, double x)
{
    if (!a || n==0 || !isfinite(x)) return NAN;
    double y=0.0;
    for (size_t i=0;i<n;i++) { if (!isfinite(a[i])) return NAN; y=y*x+a[i]; if (!isfinite(y)) return NAN; }
    return y;
}
