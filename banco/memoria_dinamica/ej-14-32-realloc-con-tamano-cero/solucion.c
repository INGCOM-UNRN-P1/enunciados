#include "ej-14-32-realloc-con-tamano-cero.h"
#include <stdio.h>
#include <stdlib.h>

void *realloc_tamano_cero(void *bloque)
{
    return realloc(bloque, 0);
}

int main(void)
{
    void *bloque = malloc(1);
    if (!bloque) {
        fputs("No se pudo reservar el bloque inicial.\n", stderr);
        return EXIT_FAILURE;
    }

    void *resultado = realloc_tamano_cero(bloque);
    if (resultado) {
        puts("Esta implementación devolvió un puntero no nulo para tamaño cero.");
        free(resultado);
    } else {
        puts("Esta implementación devolvió NULL; no se desreferencia el puntero anterior.");
    }
    return EXIT_SUCCESS;
}
