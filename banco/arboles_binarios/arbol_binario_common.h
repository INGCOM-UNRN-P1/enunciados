#ifndef ARBOL_BINARIO_COMMON_H
#define ARBOL_BINARIO_COMMON_H

typedef struct nodo_arbol {
    int valor;
    struct nodo_arbol *izq;
    struct nodo_arbol *der;
} nodo_arbol_t;

#endif
