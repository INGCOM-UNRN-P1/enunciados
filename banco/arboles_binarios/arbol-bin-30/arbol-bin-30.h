#ifndef ARBOL_BIN_30_H
#define ARBOL_BIN_30_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_30 { int valor; struct nodo_arbol_bin_30 *izq, *der; } nodo_arbol_bin_30_t;
typedef struct iterador_30 { const nodo_arbol_bin_30_t *pila[128]; size_t tope; const nodo_arbol_bin_30_t *actual; } iterador_30_t;
bool iterador_iniciar_30(iterador_30_t *it, const nodo_arbol_bin_30_t *raiz);
bool iterador_siguiente_30(iterador_30_t *it, int *valor);
#endif
