#ifndef EJERCICIO_EJ_14_19_PARTICIONAR_ARREGLO_DINAMICAME_H
#define EJERCICIO_EJ_14_19_PARTICIONAR_ARREGLO_DINAMICAME_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

bool particionar_arreglo(const int *arreglo, size_t n,
                         int **pares, size_t *cant_pares,
                         int **impares, size_t *cant_impares);

#endif /* EJERCICIO_EJ_14_19_PARTICIONAR_ARREGLO_DINAMICAME_H */
