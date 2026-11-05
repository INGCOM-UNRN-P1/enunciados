#include "ej-10-13-esta-ordenado.h"

bool esta_ordenado(const int *arreglo, size_t n)
{
    if (n > 0 && arreglo == NULL)
        return false;
    for (size_t i = 1; i < n; i++) {
        if (arreglo[i - 1] > arreglo[i])
            return false;
    }
    return true;
}
