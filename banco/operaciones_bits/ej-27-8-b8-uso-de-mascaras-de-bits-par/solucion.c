#include "ej-27-8-b8-uso-de-mascaras-de-bits-par.h"

unsigned char conceder(unsigned char permisos, unsigned char mascara)
{
    return permisos | mascara;
}

unsigned char revocar(unsigned char permisos, unsigned char mascara)
{
    return permisos & (unsigned char)~mascara;
}

int tiene_permisos(unsigned char permisos, unsigned char mascara)
{
    return (permisos & mascara) == mascara;
}
