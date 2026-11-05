#include <stdio.h>

int main(void)
{
    double radio;
    const double pi = 3.141592653589793;

    if (scanf("%lf", &radio) != 1 || radio <= 0)
        return 1;

    double area = pi * radio * radio;
    double circunferencia = 2 * pi * radio;
    printf("%.2f\n%.2f\n", area, circunferencia);
    return 0;
}
