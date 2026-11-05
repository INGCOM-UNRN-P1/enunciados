#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, b, c;

    if (scanf("%lf%lf%lf", &a, &b, &c) != 3)
        return 1;
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
        return 0;

    double semiperimetro = (a + b + c) / 2;
    double area = sqrt(semiperimetro * (semiperimetro - a) *
                       (semiperimetro - b) * (semiperimetro - c));
    printf("%.2f\n", area);
    return 0;
}
