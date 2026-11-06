#include "num-linalg-08.h"
#include <assert.h>
#include <math.h>

int main(void) {
    double a0[] = {0, 2}, a1[] = {3, 4}; double *a[] = {a0, a1};
    assert(fabs(determinante_triangularizacion(a, 2) + 6.0) < 1e-12);
    double b0[] = {1, 2}, b1[] = {2, 4}; double *b[] = {b0, b1};
    assert(determinante_triangularizacion(b, 2) == 0.0);
    assert(isnan(determinante_triangularizacion(a, 0)));
    return 0;
}
