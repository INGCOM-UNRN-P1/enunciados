/*
 * Cola #09
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_cola_queue_09(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int items = 0;
    if (scanf("%d", &items) == 1) {
        printf("COLA_QUEUE_09_CANT: %d\n", items + 9);
    }
    return 0;
}