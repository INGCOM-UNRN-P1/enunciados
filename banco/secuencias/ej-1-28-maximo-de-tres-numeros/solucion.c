#include <stdio.h>

int main(void)
{
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3)
        return 1;
    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    printf("%d\n", mayor);
    return 0;
}
