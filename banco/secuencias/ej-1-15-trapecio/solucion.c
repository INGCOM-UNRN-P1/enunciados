#include <math.h>
#include <stdio.h>

int main(void)
{
    double mayor, menor, altura;
    if (scanf("%lf%lf%lf", &mayor, &menor, &altura) != 3 ||
        !isfinite(mayor) || !isfinite(menor) || !isfinite(altura) ||
        mayor <= 0 || menor <= 0 || altura <= 0 || mayor < menor)
        return 1;
    double area = (mayor / 2 + menor / 2) * altura;
    if (!isfinite(area))
        return 1;
    printf("%.2f\n", area);
    return 0;
}
