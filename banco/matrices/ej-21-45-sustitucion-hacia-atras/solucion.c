#include "ej-21-45-sustitucion-hacia-atras.h"
#include <stdint.h>
#include <stdlib.h>

double *sustitucion_atras(double **U, double *b, int n)
{
    if (!U || !b || n <= 0 || (size_t)n > SIZE_MAX / sizeof(double)) return NULL;
    for (int i = 0; i < n; ++i) if (!U[i] || U[i][i] == 0) return NULL;
    double *x = malloc((size_t)n * sizeof(*x));
    if (!x) return NULL;
    for (int i = n; i-- > 0;) {
        double suma = b[i];
        for (int j = i + 1; j < n; ++j) suma -= U[i][j] * x[j];
        x[i] = suma / U[i][i];
    }
    return x;
}
