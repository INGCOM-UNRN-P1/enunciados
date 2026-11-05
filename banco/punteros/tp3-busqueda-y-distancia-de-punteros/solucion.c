#include <limits.h>
#include <stddef.h>

const int *buscar_primero(const int *arreglo, size_t cantidad, int buscado)
{
    if (arreglo == NULL)
        return NULL;
    for (size_t i = 0; i < cantidad; i++)
        if (*(arreglo + i) == buscado)
            return arreglo + i;
    return NULL;
}

int distancia_punteros(const int *inicio, const int *elemento)
{
    if (inicio == NULL || elemento == NULL)
        return -1;
    ptrdiff_t distancia = elemento - inicio;
    if (distancia < 0 || distancia > INT_MAX)
        return -1;
    return (int)distancia;
}
