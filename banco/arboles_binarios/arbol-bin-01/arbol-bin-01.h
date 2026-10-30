#ifndef EJERCICIO_ARBOL_BIN_01_H
#define EJERCICIO_ARBOL_BIN_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inorder */
void inorder(const nodo_arbol_t *n);
/* Operación liberar_arbol */
void liberar_arbol(nodo_arbol_t *n);

#endif /* EJERCICIO_ARBOL_BIN_01_H */
