/*
 * Pila #28
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_pila_stack_28(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int elementos = 0;
    if (scanf("%d", &elementos) == 1) {
        printf("PILA_STACK_28_TOPE: %d\n", elementos + 28);
    }
    return 0;
}