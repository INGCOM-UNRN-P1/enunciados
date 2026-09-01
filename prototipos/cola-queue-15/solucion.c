/*
 * Cola #15
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_cola_queue_15(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int items = 0;
    if (scanf("%d", &items) == 1) {
        printf("COLA_QUEUE_15_CANT: %d\n", items + 15);
    }
    return 0;
}