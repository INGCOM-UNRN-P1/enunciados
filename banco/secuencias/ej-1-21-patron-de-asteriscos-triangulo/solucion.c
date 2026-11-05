#include <stdio.h>

int main(void)
{
    int filas;
    if (scanf("%d", &filas) != 1 || filas < 1)
        return 1;

    for (int fila = 1; fila <= filas; fila++) {
        for (int columna = 0; columna < fila; columna++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
