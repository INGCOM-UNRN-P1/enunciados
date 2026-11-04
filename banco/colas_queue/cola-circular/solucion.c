#include "cola-circular.h"

void cola_inicializar(cola_t *cola)
{
    cola->frente = 0;
    cola->final = 0;
    cola->cantidad = 0;
}

bool cola_esta_vacia(const cola_t *cola)
{
    return cola->cantidad == 0;
}

bool cola_esta_llena(const cola_t *cola)
{
    return cola->cantidad == CAPACIDAD;
}

bool cola_encolar(cola_t *cola, int valor)
{
    if (cola_esta_llena(cola))
    {
        return false;
    }
    cola->datos[cola->final] = valor;
    cola->final = (cola->final + 1) % CAPACIDAD;
    cola->cantidad++;
    return true;
}

bool cola_desencolar(cola_t *cola, int *valor)
{
    if (cola_esta_vacia(cola))
    {
        return false;
    }
    *valor = cola->datos[cola->frente];
    cola->frente = (cola->frente + 1) % CAPACIDAD;
    cola->cantidad--;
    return true;
}
