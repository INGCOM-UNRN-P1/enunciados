#include "ej-21-25-traza-de-matriz.h"

double traza(double **matriz, int n)
{
    double suma = 0.0;
    int i;

    if (matriz == NULL || n <= 0) {
        return 0.0;
    }
    for (i = 0; i < n; i++) {
        if (matriz[i] == NULL) {
            return 0.0;
        }
        suma += matriz[i][i];
    }
    return suma;
}
