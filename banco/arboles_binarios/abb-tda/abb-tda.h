#ifndef ABB_TDA_H
#define ABB_TDA_H

#include <stdbool.h>

typedef struct nodo_abb {
    int clave;
    struct nodo_abb *izq;
    struct nodo_abb *der;
} nodo_abb_t;

bool abb_insertar(nodo_abb_t **raiz, int clave);
bool abb_buscar(const nodo_abb_t *raiz, int clave);
void abb_destruir(nodo_abb_t **raiz);

#endif
