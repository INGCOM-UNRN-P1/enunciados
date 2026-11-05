#include "cripto-hash-01.h"

#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

#define MOD_ADLER 65521u

uint32_t adler32(const char *texto)
{
    uint32_t a = 1, b = 0;
    const unsigned char *p = (const unsigned char *)texto;
    while (*p != 0)
    {
        a = (a + *p++) % MOD_ADLER;
        b = (b + a) % MOD_ADLER;
    }
    return (b << 16) | a;
}

int main(void)
{
    char texto[256];
    if (scanf("%255s", texto) != 1)
        return 1;
    printf("ADLER32: 0x%08" PRIX32 "\n", adler32(texto));
    return 0;
}
