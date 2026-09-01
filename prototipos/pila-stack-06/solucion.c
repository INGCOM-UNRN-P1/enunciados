/*
 * Pila #06
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_pila_stack_06(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int elementos = 0;
    if (scanf("%d", &elementos) == 1) {
        printf("PILA_STACK_06_TOPE: %d\n", elementos + 6);
    }
    return 0;
}