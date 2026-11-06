#include "num-linalg-08.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

double determinante_triangularizacion(double **A, int n)
{
    if (!A || n <= 0 || (size_t)n > SIZE_MAX / (size_t)n / sizeof(double)) return NAN;
    size_t nn = (size_t)n;
    double *m = malloc(nn * nn * sizeof(*m));
    if (!m) return NAN;
    for (size_t i = 0; i < nn; ++i) {
        if (!A[i]) { free(m); return NAN; }
        for (size_t j = 0; j < nn; ++j) {
            if (!isfinite(A[i][j])) { free(m); return NAN; }
            m[i * nn + j] = A[i][j];
        }
    }
    double det = 1.0;
    int sign = 1;
    for (size_t col = 0; col < nn; ++col) {
        size_t p = col;
        for (size_t r = col + 1; r < nn; ++r)
            if (fabs(m[r * nn + col]) > fabs(m[p * nn + col])) p = r;
        if (m[p * nn + col] == 0.0) { free(m); return 0.0; }
        if (p != col) {
            for (size_t j = col; j < nn; ++j) { double t=m[col*nn+j]; m[col*nn+j]=m[p*nn+j]; m[p*nn+j]=t; }
            sign = -sign;
        }
        double pivot = m[col * nn + col]; det *= pivot;
        for (size_t r = col + 1; r < nn; ++r) {
            double factor = m[r * nn + col] / pivot;
            for (size_t j = col + 1; j < nn; ++j) m[r * nn + j] -= factor * m[col * nn + j];
        }
    }
    free(m);
    det *= sign;
    return isfinite(det) ? det : NAN;
}
