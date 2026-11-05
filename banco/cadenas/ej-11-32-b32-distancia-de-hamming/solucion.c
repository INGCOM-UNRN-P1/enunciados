#include "ej-11-32-b32-distancia-de-hamming.h"

#include <string.h>
#include <limits.h>

int distancia_hamming(const char *cadena1, const char *cadena2)
{
    size_t distancia = 0;

    if (cadena1 == NULL || cadena2 == NULL) {
        return -1;
    }

    size_t longitud = strlen(cadena1);
    if (longitud != strlen(cadena2)) {
        return -1;
    }

    for (size_t i = 0; i < longitud; i++) {
        if (cadena1[i] != cadena2[i]) {
            distancia++;
        }
    }

    if (distancia > (size_t)INT_MAX) {
        return -1;
    }
    return (int)distancia;
}
