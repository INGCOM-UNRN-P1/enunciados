#ifndef EJERCICIO_EJ_14_26_FILTRO_DE_ARREGLO_DINAMICO_H
#define EJERCICIO_EJ_14_26_FILTRO_DE_ARREGLO_DINAMICO_H

#include <stdbool.h>
#include <stddef.h>
typedef bool (*predicado_int_t)(int valor);
int *filtrar_arreglo(const int *datos, size_t n, predicado_int_t predicado,
                     size_t *cantidad);

#endif
