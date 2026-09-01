/*
 * Cripto #13
 * Catedra Programacion I - UNRN
 */
#include <stdint.h>
#include <stdio.h>


int ejecutar_cripto_hash_13(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    uint32_t valor = 0;
    if (scanf("%u", &valor) == 1) {
        uint32_t h = (valor ^ 0x5A5A5A5A) + (uint32_t)13;
        printf("HASH_%02d: 0x%08X\n", 13, h);
    }
    return 0;
}