/*
 * Skip List #11
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_skip_list_11(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nivel = 0, saltos = 0;
    if (scanf("%d %d", &nivel, &saltos) == 2) {
        int costo = (nivel * 10) + saltos + 11;
        printf("SKIP_%02d_COSTO: %d\n", 11, costo);
    }
    return 0;
}