#include "ej-21-21-producto-de-hadamard.h"

bool producto_hadamard(const int *a, const int *b, size_t filas, size_t columnas,
                       int64_t *resultado)
{
    size_t i;
    size_t cantidad;

    if (a == NULL || b == NULL || resultado == NULL || filas == 0 || columnas == 0 ||
        filas > SIZE_MAX / columnas) {
        return false;
    }

    cantidad = filas * columnas;
    for (i = 0; i < cantidad; i++) {
        resultado[i] = (int64_t)a[i] * (int64_t)b[i];
    }
    return true;
}
