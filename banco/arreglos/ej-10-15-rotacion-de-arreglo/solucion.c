#include "ej-10-15-rotacion-de-arreglo.h"

static void invertir(int *arreglo, size_t n)
{
    for (size_t i = 0; i < n / 2; i++) {
        int temporal = arreglo[i];
        arreglo[i] = arreglo[n - 1 - i];
        arreglo[n - 1 - i] = temporal;
    }
}

void rotar_derecha(int *arreglo, size_t n, size_t k)
{
    if (n == 0 || arreglo == NULL)
        return;
    k %= n;
    invertir(arreglo, n);
    invertir(arreglo, k);
    invertir(arreglo + k, n - k);
}
