#include "fsm-estados-01.h"

typedef enum { ESTADO_PAR, ESTADO_IMPAR } estado_paridad_e;

int paridad_de_unos(const char *bits)
{
    estado_paridad_e estado = ESTADO_PAR;
    for (; *bits != '\0'; bits++)
    {
        if (*bits == '1')
            estado = estado == ESTADO_PAR ? ESTADO_IMPAR : ESTADO_PAR;
        else if (*bits != '0')
            return -1;
    }
    return estado == ESTADO_PAR;
}
