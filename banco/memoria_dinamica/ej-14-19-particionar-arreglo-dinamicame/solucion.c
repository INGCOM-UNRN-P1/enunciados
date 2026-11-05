#include "ej-14-19-particionar-arreglo-dinamicame.h"

#include <stdlib.h>

bool particionar_arreglo(const int *arreglo, size_t n,
                         int **pares, size_t *cant_pares,
                         int **impares, size_t *cant_impares)
{
    if (arreglo == NULL || pares == NULL || impares == NULL ||
        cant_pares == NULL || cant_impares == NULL) {
        return false;
    }

    size_t cuenta_pares = 0;
    size_t cuenta_impares = 0;
    for (size_t i = 0; i < n; i++) {
        if (arreglo[i] % 2 == 0) {
            cuenta_pares++;
        } else {
            cuenta_impares++;
        }
    }

    int *nuevos_pares = NULL;
    int *nuevos_impares = NULL;
    if (cuenta_pares > 0) {
        nuevos_pares = malloc(cuenta_pares * sizeof(*nuevos_pares));
        if (nuevos_pares == NULL) {
            return false;
        }
    }
    if (cuenta_impares > 0) {
        nuevos_impares = malloc(cuenta_impares * sizeof(*nuevos_impares));
        if (nuevos_impares == NULL) {
            free(nuevos_pares);
            return false;
        }
    }

    size_t i_par = 0;
    size_t i_impar = 0;
    for (size_t i = 0; i < n; i++) {
        if (arreglo[i] % 2 == 0) {
            nuevos_pares[i_par++] = arreglo[i];
        } else {
            nuevos_impares[i_impar++] = arreglo[i];
        }
    }

    *pares = nuevos_pares;
    *cant_pares = cuenta_pares;
    *impares = nuevos_impares;
    *cant_impares = cuenta_impares;
    return true;
}
