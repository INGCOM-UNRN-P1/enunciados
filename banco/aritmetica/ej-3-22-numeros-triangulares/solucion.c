#include "ej-3-22-numeros-triangulares.h"

#include <stdint.h>

bool es_triangular(int64_t n)
{
    if (n < 0) {
        return false;
    }
    if (n == 0) {
        return true;
    }

    int64_t suma = 0;
    int64_t siguiente = 1;
    while (siguiente <= n - suma) {
        suma += siguiente;
        if (suma == n) {
            return true;
        }
        ++siguiente;
    }
    return false;
}

bool generar_triangulares(size_t cantidad, int64_t *salida, size_t capacidad)
{
    if (cantidad > capacidad || (cantidad > 0U && salida == NULL)) {
        return false;
    }

    int64_t suma = 0;
    for (size_t i = 0U; i < cantidad; ++i) {
        if (i >= (size_t)INT64_MAX) {
            return false;
        }
        int64_t incremento = (int64_t)i + 1;
        if (incremento > INT64_MAX - suma) {
            return false;
        }
        suma += incremento;
    }

    suma = 0;
    for (size_t i = 0U; i < cantidad; ++i) {
        suma += (int64_t)i + 1;
        salida[i] = suma;
    }
    return true;
}
