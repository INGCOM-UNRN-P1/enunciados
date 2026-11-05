#include <stdio.h>

int main(void)
{
    double largo, ancho;

    if (scanf("%lf%lf", &largo, &ancho) != 2 || largo <= 0 || ancho <= 0)
        return 1;

    double area = largo * ancho;
    double perimetro = 2 * (largo + ancho);
    printf("%.2f\n%.2f\n", area, perimetro);
    return 0;
}
