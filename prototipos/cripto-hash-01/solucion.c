/*
 * Checksum Adler-32
 * Catedra Programacion I - UNRN
 */
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MOD_ADLER 65521


int ejecutar_cripto_hash_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char buf[256] = {0};
    if (scanf("%255s", buf) == 1) {
        uint32_t a = 1, b = 0;
        size_t len = strlen(buf);
        for (size_t i = 0; i < len; i++) {
            a = (a + (uint8_t)buf[i]) % MOD_ADLER;
            b = (b + a) % MOD_ADLER;
        }
        uint32_t adler = (b << 16) | a;
        printf("ADLER32: 0x%08X\n", adler);
    }
    return 0;
}