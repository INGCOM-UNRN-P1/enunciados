/*
 * Cache #17
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_lru_cache_17(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int hits = 0, misses = 0;
    if (scanf("%d %d", &hits, &misses) == 2) {
        int total = hits + misses;
        double ratio = (total > 0) ? (double)hits / total : 0.0;
        printf("CACHE_%02d_RATIO: %.2f\n", 17, ratio);
    }
    return 0;
}