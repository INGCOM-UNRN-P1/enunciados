#include "num-linalg-07.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

int invertir_gauss_jordan(double **A, int n)
{
    if (A == NULL || n <= 0 || (size_t)n > SIZE_MAX / (size_t)n / 2 / sizeof(double)) return 0;
    size_t nn = (size_t)n;
    double *aug = calloc(nn * nn * 2, sizeof(*aug));
    if (!aug) return 0;
    size_t width = nn * 2;
    for (size_t i = 0; i < nn; ++i) {
        if (!A[i]) { free(aug); return 0; }
        for (size_t j = 0; j < nn; ++j) {
            if (!isfinite(A[i][j])) { free(aug); return 0; }
            aug[i * width + j] = A[i][j];
        }
        aug[i * width + nn + i] = 1.0;
    }
    for (size_t col = 0; col < nn; ++col) {
        size_t pivot = col;
        for (size_t row = col + 1; row < nn; ++row)
            if (fabs(aug[row * width + col]) > fabs(aug[pivot * width + col])) pivot = row;
        if (aug[pivot * width + col] == 0.0) { free(aug); return 0; }
        if (pivot != col) for (size_t j = 0; j < width; ++j) {
            double t = aug[col * width + j]; aug[col * width + j] = aug[pivot * width + j]; aug[pivot * width + j] = t;
        }
        double d = aug[col * width + col];
        for (size_t j = 0; j < width; ++j) aug[col * width + j] /= d;
        for (size_t row = 0; row < nn; ++row) if (row != col) {
            double factor = aug[row * width + col];
            for (size_t j = 0; j < width; ++j) aug[row * width + j] -= factor * aug[col * width + j];
        }
    }
    for (size_t i = 0; i < nn; ++i) for (size_t j = 0; j < nn; ++j)
        if (!isfinite(aug[i * width + nn + j])) { free(aug); return 0; }
    for (size_t i = 0; i < nn; ++i) for (size_t j = 0; j < nn; ++j)
        A[i][j] = aug[i * width + nn + j];
    free(aug);
    return 1;
}
