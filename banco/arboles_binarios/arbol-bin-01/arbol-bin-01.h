#ifndef EJERCICIO_ARBOL_BIN_01_H
#define EJERCICIO_ARBOL_BIN_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inorder */
void inorder(const t_NodoArbol *n);
/* Operación liberar_arbol */
void liberar_arbol(t_NodoArbol *n);

#endif /* EJERCICIO_ARBOL_BIN_01_H */
