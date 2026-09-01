#include <stdio.h>
#include <stdlib.h>

#include <malloc.h>

int proc_on_de_overhead_de_ma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    size_t tamaños[] = {1, 8, 16, 32, 64, 100, 128, 256, 512, 1024};
    for (size_t i = 0; i < sizeof(tamaños) / sizeof(tamaños[0]); i++)
    {
        void *ptr = malloc(tamaños[i]);
        size_t real = malloc_usable_size(ptr);
        printf(
            "Solicitado: %5zu bytes -> Real: %5zu bytes (%.1f%% overhead)\n",
            tamaños[i], real, 100.0 * (real - tamaños[i]) / tamaños[i]);
        free(ptr);
    }
    return 0;
}