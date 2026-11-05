#include "ej-3-21-raiz-cuadrada-entera-metodo-ba.h"

#include <stddef.h>

int raiz_cuadrada_entera(int n, unsigned *iteraciones)
{
    if (iteraciones != NULL) {
        *iteraciones = 0U;
    }
    if (n < 0) {
        return -1;
    }
    if (n < 2) {
        return n;
    }

    long long actual = n;
    unsigned pasos = 0U;
    for (;;) {
        long long siguiente = (actual + (long long)n / actual) / 2;
        ++pasos;
        if (siguiente >= actual) {
            break;
        }
        actual = siguiente;
    }

    if (iteraciones != NULL) {
        *iteraciones = pasos;
    }
    return (int)actual;
}
