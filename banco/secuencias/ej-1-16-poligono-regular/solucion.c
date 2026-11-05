#include <math.h>
#include <stdio.h>

int main(void)
{
    int lados;
    double longitud, apotema;
    if (scanf("%d%lf%lf", &lados, &longitud, &apotema) != 3 ||
        lados < 3 || !isfinite(longitud) || !isfinite(apotema) ||
        longitud <= 0 || apotema <= 0)
        return 1;
    double area = lados * (longitud / 2) * apotema;
    if (!isfinite(area))
        return 1;
    printf("%.2f\n", area);
    return 0;
}
