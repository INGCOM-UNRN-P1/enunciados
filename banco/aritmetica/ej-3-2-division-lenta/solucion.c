#include "ej-3-2-division-lenta.h"

int division_lenta(int dividendo, int divisor) {
    if (divisor == 0) return 0;
    int negativo = (dividendo < 0) != (divisor < 0);
    unsigned int resto = dividendo < 0 ? 0u - (unsigned int)dividendo : (unsigned int)dividendo;
    unsigned int divisor_abs = divisor < 0 ? 0u - (unsigned int)divisor : (unsigned int)divisor;
    unsigned int cociente = 0;
    while (resto >= divisor_abs) { resto -= divisor_abs; ++cociente; }
    if (negativo) return cociente == 2147483648u ? (-2147483647 - 1) : -(int)cociente;
    return cociente > 2147483647u ? 2147483647 : (int)cociente;
}
