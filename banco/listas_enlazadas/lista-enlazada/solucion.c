#include "lista-enlazada.h"
#include <stdlib.h>

bool lista_insertar_inicio(nodo_t **cabeza, int valor)
{
    nodo_t *nuevo = (nodo_t *)malloc(sizeof(nodo_t));
    if (nuevo == NULL)
    {
        return false;
    }
    nuevo->dato = valor;
    nuevo->sig = *cabeza;
    *cabeza = nuevo;
    return true;
}

bool lista_eliminar(nodo_t **cabeza, int valor)
{
    nodo_t **actual = cabeza;
    while (*actual != NULL && (*actual)->dato != valor)
    {
        actual = &((*actual)->sig);
    }
    if (*actual == NULL)
    {
        return false;
    }
    nodo_t *a_eliminar = *actual;
    *actual = a_eliminar->sig;
    free(a_eliminar);
    return true;
}

void lista_destruir(nodo_t **cabeza)
{
    nodo_t *actual = *cabeza;
    while (actual != NULL)
    {
        nodo_t *siguiente = actual->sig;
        free(actual);
        actual = siguiente;
    }
    *cabeza = NULL;
}
