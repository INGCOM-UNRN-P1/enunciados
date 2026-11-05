#ifndef EJERCICIO_EJ_3_22_NUMEROS_TRIANGULARES_H
#define EJERCICIO_EJ_3_22_NUMEROS_TRIANGULARES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

bool es_triangular(int64_t n);
bool generar_triangulares(size_t cantidad, int64_t *salida, size_t capacidad);

#endif
