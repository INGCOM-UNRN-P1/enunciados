#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H

#include <stdbool.h>

typedef struct nodo {
    int dato;
    struct nodo *sig;
} nodo_t;

bool lista_insertar_inicio(nodo_t **cabeza, int valor);
bool lista_eliminar(nodo_t **cabeza, int valor);
void lista_destruir(nodo_t **cabeza);

#endif
