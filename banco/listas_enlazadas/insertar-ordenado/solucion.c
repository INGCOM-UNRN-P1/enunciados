#include <stdlib.h>

#include "insertar-ordenado.h"

bool insertar_ordenado(nodo_t **cabeza, int valor)
{
    nodo_t *nuevo = malloc(sizeof(nodo_t));
    if (nuevo == NULL)
    {
        return false;
    }
    nodo_t **actual = cabeza;
    while (*actual != NULL && (*actual)->dato < valor)
    {
        actual = &(*actual)->sig;
    }
    nuevo->dato = valor;
    nuevo->sig = *actual;
    *actual = nuevo;
    return true;
}
