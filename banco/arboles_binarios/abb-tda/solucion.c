#include "abb-tda.h"
#include <stdlib.h>

bool abb_insertar(nodo_abb_t **raiz, int clave)
{
    if (*raiz == NULL)
    {
        nodo_abb_t *nuevo = (nodo_abb_t *)malloc(sizeof(nodo_abb_t));
        if (nuevo == NULL)
        {
            return false;
        }
        nuevo->clave = clave;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        *raiz = nuevo;
        return true;
    }
    if (clave == (*raiz)->clave)
    {
        return false;
    }
    if (clave < (*raiz)->clave)
    {
        return abb_insertar(&((*raiz)->izq), clave);
    }
    return abb_insertar(&((*raiz)->der), clave);
}

bool abb_buscar(const nodo_abb_t *raiz, int clave)
{
    if (raiz == NULL)
    {
        return false;
    }
    if (clave == raiz->clave)
    {
        return true;
    }
    if (clave < raiz->clave)
    {
        return abb_buscar(raiz->izq, clave);
    }
    return abb_buscar(raiz->der, clave);
}

void abb_destruir(nodo_abb_t **raiz)
{
    if (*raiz == NULL)
    {
        return;
    }
    abb_destruir(&((*raiz)->izq));
    abb_destruir(&((*raiz)->der));
    free(*raiz);
    *raiz = NULL;
}
