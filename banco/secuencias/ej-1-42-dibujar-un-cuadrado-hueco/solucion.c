#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 0)
        return 1;
    for (int fila = 0; fila < n; fila++)
    {
        for (int columna = 0; columna < n; columna++)
            putchar(fila == 0 || fila == n - 1 || columna == 0 || columna == n - 1 ? '*' : ' ');
        putchar('\n');
    }
    return 0;
}
