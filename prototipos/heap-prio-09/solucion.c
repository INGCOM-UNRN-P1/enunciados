/*
 * Heap #09
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_heap_prio_09(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int prioridad = 0, valor = 0;
    if (scanf("%d %d", &prioridad, &valor) == 2) {
        int score = prioridad * 100 + valor + 9;
        printf("HEAP_%02d_SCORE: %d\n", 9, score);
    }
    return 0;
}