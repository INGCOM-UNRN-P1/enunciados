#ifndef EJERCICIO_ARBOL_BIN_02_H
#define EJERCICIO_ARBOL_BIN_02_H
#include <stddef.h>
#include "../arbol_binario_common.h"
int altura_arbol(const nodo_arbol_t *n);
int contar_hojas(const nodo_arbol_t *n);
void liberar_arbol(nodo_arbol_t *n);
#endif
