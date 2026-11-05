#include "ej-14-11-redimensionar-arreglo.h"

#include <stdint.h>
#include <stdlib.h>

int *redimensionar_arreglo(int *arr, size_t nuevo_tamano)
{
    if (nuevo_tamano == 0) {
        free(arr);
        return NULL;
    }
    if (nuevo_tamano > SIZE_MAX / sizeof(*arr)) {
        return NULL;
    }

    return realloc(arr, nuevo_tamano * sizeof(*arr));
}
