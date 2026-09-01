/*
 * Skip List #03
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_skip_list_03(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nivel = 0, saltos = 0;
    if (scanf("%d %d", &nivel, &saltos) == 2) {
        int costo = (nivel * 10) + saltos + 3;
        printf("SKIP_%02d_COSTO: %d\n", 3, costo);
    }
    return 0;
}