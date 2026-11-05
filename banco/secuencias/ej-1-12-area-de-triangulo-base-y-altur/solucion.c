#include <stdio.h>

int main(void)
{
    double base, altura;

    if (scanf("%lf%lf", &base, &altura) != 2 || base <= 0 || altura <= 0)
        return 1;

    printf("%.2f\n", base * altura / 2);
    return 0;
}
