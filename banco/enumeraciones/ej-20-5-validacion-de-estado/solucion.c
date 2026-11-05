#include "ej-20-5-validacion-de-estado.h"

bool estado_valido(int valor)
{
    return valor >= DESCONECTADO && valor < _ESTADO_MAX;
}
