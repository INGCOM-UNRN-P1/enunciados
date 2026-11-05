#include "cripto-hash-09.h"

uint32_t xorshift32(uint32_t estado)
{
    estado ^= estado << 13;
    estado ^= estado >> 17;
    estado ^= estado << 5;
    return estado;
}
