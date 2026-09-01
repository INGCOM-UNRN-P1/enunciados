/*
 * AVL #06
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_avl_tree_06(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int clave = 0, altura = 0;
    if (scanf("%d %d", &clave, &altura) == 2) {
        int factor = (clave % 3) + altura + 6;
        printf("AVL_%02d_FACTOR: %d\n", 6, factor);
    }
    return 0;
}