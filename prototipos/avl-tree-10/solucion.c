/*
 * AVL #10
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_avl_tree_10(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int clave = 0, altura = 0;
    if (scanf("%d %d", &clave, &altura) == 2) {
        int factor = (clave % 3) + altura + 10;
        printf("AVL_%02d_FACTOR: %d\n", 10, factor);
    }
    return 0;
}