#include "ej-3-14-conjetura-de-collatz.h"
#include <limits.h>
#include <stdio.h>

int longitud_collatz(int n) {
    if (n <= 0) return -1;
    unsigned long long actual = (unsigned int)n;
    int pasos = 0;
    printf("%llu", actual);
    while (actual != 1u && pasos < 10000) {
        if ((actual & 1u) == 0u) {
            actual /= 2u;
        } else {
            if (actual > (ULLONG_MAX - 1u) / 3u) {
                putchar('\n');
                return -1;
            }
            actual = 3u * actual + 1u;
        }
        ++pasos;
        printf(" -> %llu", actual);
    }
    putchar('\n');
    return actual == 1u ? pasos : -1;
}
