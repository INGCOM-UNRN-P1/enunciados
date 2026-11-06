#include "num-linalg-07.h"
#include <assert.h>
#include <math.h>

int main(void) {
    double r0[] = {4, 7}, r1[] = {2, 6}; double *a[] = {r0, r1};
    assert(invertir_gauss_jordan(a, 2));
    assert(fabs(r0[0] - .6) < 1e-12 && fabs(r0[1] + .7) < 1e-12);
    assert(fabs(r1[0] + .2) < 1e-12 && fabs(r1[1] - .4) < 1e-12);
    double s0[] = {1, 2}, s1[] = {2, 4}; double *s[] = {s0, s1};
    assert(!invertir_gauss_jordan(s, 2));
    assert(!invertir_gauss_jordan(a, 0));
    return 0;
}
