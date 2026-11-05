#include <math.h>
#include <stdio.h>

int main(void)
{
    double primero, segundo;
    if (scanf("%lf %lf", &primero, &segundo) != 2 ||
        !isfinite(primero) || !isfinite(segundo))
        return 1;
    printf("%.15g\n", primero > segundo ? primero : segundo);
    return 0;
}
