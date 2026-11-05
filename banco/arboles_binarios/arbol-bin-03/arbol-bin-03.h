#ifndef EJERCICIO_ARBOL_BIN_03_H
#define EJERCICIO_ARBOL_BIN_03_H
#include <stddef.h>
#include "../arbol_binario_common.h"
/* Returns values written; if capacity is insufficient, returns 0 and leaves salida unchanged.
 * An empty tree writes no values and returns 0. salida must be non-NULL for a non-empty tree. */
size_t recorrido_niveles(const nodo_arbol_t *raiz, int *salida, size_t capacidad);
#endif
