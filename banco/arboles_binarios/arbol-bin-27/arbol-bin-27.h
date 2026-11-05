#ifndef ARBOL_BIN_27_H
#define ARBOL_BIN_27_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_27_t { int valor; struct nodo_arbol_bin_27_t *izq, *der; } nodo_arbol_bin_27_t;
bool serializar_27(const nodo_arbol_bin_27_t *raiz, char *buffer, size_t capacidad);
bool deserializar_27(const char *texto, nodo_arbol_bin_27_t **raiz);
void liberar_27(nodo_arbol_bin_27_t *raiz);
#endif
