#include "pila-en-arreglo.h"

bool pila_push(pila_t *pila, int valor)
{
    if (pila->tope == CAPACIDAD - 1)
    {
        return false;
    }
    pila->tope++;
    pila->datos[pila->tope] = valor;
    return true;
}

bool pila_pop(pila_t *pila, int *valor)
{
    if (pila->tope < 0)
    {
        return false;
    }
    *valor = pila->datos[pila->tope];
    pila->tope--;
    return true;
}
