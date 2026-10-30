/*
 * Skip List #26
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_skip_list_26(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nivel = 0, saltos = 0;
    if (scanf("%d %d", &nivel, &saltos) == 2) {
        int costo = (nivel * 10) + saltos + 26;
        printf("SKIP_%02d_COSTO: %d\n", 26, costo);
    }
    return 0;
}