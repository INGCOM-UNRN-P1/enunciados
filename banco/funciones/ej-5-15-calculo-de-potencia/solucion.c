#include "ej-5-15-calculo-de-potencia.h"

#include <limits.h>
#include <math.h>

/* Evita negar INT_MIN, que no es representable como int. */
static unsigned int magnitud(int exp)
{
    return exp < 0 ? (unsigned int)(-(exp + 1)) + 1u : (unsigned int)exp;
}

double potencia_iterativa(double base, int exp)
{
    if (base == 0.0 && exp < 0)
        return NAN;
    unsigned int n = magnitud(exp);
    double resultado = 1.0;
    while (n-- > 0)
        resultado *= base;
    return exp < 0 ? 1.0 / resultado : resultado;
}

double potencia_rapida(double base, int exp)
{
    if (base == 0.0 && exp < 0)
        return NAN;
    unsigned int n = magnitud(exp);
    double resultado = 1.0;
    while (n > 0)
    {
        if (n % 2u != 0)
            resultado *= base;
        n /= 2u;
        if (n > 0)
            base *= base;
    }
    return exp < 0 ? 1.0 / resultado : resultado;
}
