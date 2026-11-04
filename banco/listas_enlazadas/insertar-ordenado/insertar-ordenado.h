#ifndef INSERTAR_ORDENADO_H
#define INSERTAR_ORDENADO_H

#include <stdbool.h>

typedef struct nodo {
    int dato;
    struct nodo *sig;
} nodo_t;

bool insertar_ordenado(nodo_t **cabeza, int valor);

#endif
