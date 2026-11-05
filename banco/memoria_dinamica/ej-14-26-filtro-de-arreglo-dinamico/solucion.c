#include "ej-14-26-filtro-de-arreglo-dinamico.h"
#include <stdint.h>
#include <stdlib.h>

int *filtrar_arreglo(const int *datos, size_t n, predicado_int_t predicado,
                     size_t *cantidad)
{
    if (!cantidad || !predicado || (!datos && n)) return NULL;
    *cantidad = 0;
    for (size_t i = 0; i < n; i++) if (predicado(datos[i])) (*cantidad)++;
    if (!*cantidad) return NULL;
    if (*cantidad > SIZE_MAX / sizeof(int)) { *cantidad = 0; return NULL; }
    int *resultado = malloc(*cantidad * sizeof *resultado);
    if (!resultado) { *cantidad = 0; return NULL; }
    size_t j = 0;
    for (size_t i = 0; i < n; i++) if (predicado(datos[i])) resultado[j++] = datos[i];
    return resultado;
}
