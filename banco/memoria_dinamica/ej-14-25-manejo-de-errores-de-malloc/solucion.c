#include "ej-14-25-manejo-de-errores-de-malloc.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void *reservar_arreglo(size_t n, size_t s)
{
    if (!n || !s || n > SIZE_MAX / s) return NULL;
    return malloc(n * s);
}

void *reservar_arreglo_o_salir(size_t n, size_t s)
{
    void *p = reservar_arreglo(n, s);
    if (!p) {
        fputs("Error: no se pudo reservar memoria para el arreglo.\n", stderr);
        exit(EXIT_FAILURE);
    }
    return p;
}

int main(void)
{
    size_t cantidad = 10;
    int *datos = reservar_arreglo_o_salir(cantidad, sizeof *datos);
    for (size_t i = 0; i < cantidad; i++) datos[i] = (int)i;
    printf("Se reservaron y usaron %zu enteros.\n", cantidad);
    free(datos);
    return EXIT_SUCCESS;
}
