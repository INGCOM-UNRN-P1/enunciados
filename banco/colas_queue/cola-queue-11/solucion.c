/*
 * Cola #11
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_cola_queue_11(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int items = 0;
    if (scanf("%d", &items) == 1) {
        printf("COLA_QUEUE_11_CANT: %d\n", items + 11);
    }
    return 0;
}