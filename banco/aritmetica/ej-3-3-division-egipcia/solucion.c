#include "ej-3-3-division-egipcia.h"
#include <stddef.h>

int division_egipcia(int dividendo, int divisor, int *resto_salida) {
    if (dividendo < 0 || divisor <= 0 || resto_salida == NULL) return -1;
    unsigned int cociente = 0;
    unsigned int resto = (unsigned int)dividendo;
    unsigned int d = (unsigned int)divisor, factor = 1;
    while (d <= resto && d <= resto - d) { d *= 2u; factor *= 2u; }
    while (factor != 0u) {
        if (d <= resto) { resto -= d; cociente += factor; }
        d /= 2u; factor /= 2u;
    }
    *resto_salida = (int)resto;
    return (int)cociente;
}
