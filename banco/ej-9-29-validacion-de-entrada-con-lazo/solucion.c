#include <stdio.h>

int pedir_entero_rango(int min, int max)
{
    int val;
    while (1) {
        printf("Ingrese valor entre %d y %d: ", min, max);
        if (scanf("%d", &val) == 1) {
            if (val >= min && val <= max) {
                return val;
            }
        }
        printf("Invalido, reintente.\n");
        while (getchar() != '\n'); // Limpia buffer
    }
}

int main(void)
{
    return 0;
}