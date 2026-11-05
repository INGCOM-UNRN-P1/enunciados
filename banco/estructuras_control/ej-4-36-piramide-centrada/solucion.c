#include <stdio.h>

void dibujar_piramide(int filas)
{
    for (int fila = 0; fila < filas; fila++)
    {
        for (int espacio = 0; espacio < filas - fila - 1; espacio++)
            putchar(' ');
        for (int estrella = 0; estrella < 2 * fila + 1; estrella++)
            putchar('*');
        putchar('\n');
    }
}

int main(void)
{
    int filas;
    if (scanf("%d", &filas) != 1 || filas <= 0) return 1;
    dibujar_piramide(filas);
    return 0;
}
