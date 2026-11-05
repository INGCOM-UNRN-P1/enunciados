#include "ej-14-31-realloc-con-null.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void *realloc_desde_null(size_t n)
{
    return realloc(NULL, n);
}

int main(void)
{
    const size_t cantidad = 4;
    int *desde_realloc = realloc_desde_null(cantidad * sizeof *desde_realloc);
    int *desde_malloc = malloc(cantidad * sizeof *desde_malloc);
    if (!desde_realloc || !desde_malloc) {
        fputs("No se pudo reservar memoria.\n", stderr);
        free(desde_realloc);
        free(desde_malloc);
        return EXIT_FAILURE;
    }
    for (size_t i = 0; i < cantidad; i++) {
        desde_realloc[i] = (int)(i * 3);
        desde_malloc[i] = (int)(i * 3);
    }
    bool iguales = true;
    for (size_t i = 0; i < cantidad; i++) {
        if (desde_realloc[i] != desde_malloc[i]) iguales = false;
    }
    printf("Los bloques se pueden usar del mismo modo: %s.\n",
           iguales ? "sí" : "no");
    free(desde_realloc);
    free(desde_malloc);
    return iguales ? EXIT_SUCCESS : EXIT_FAILURE;
}
