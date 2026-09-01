#include <math.h>

double tri(double a, double b, double c, int *tipo)
{
    if (a+b<=c||a+c<=b||b+c<=a) { *tipo=0; return 0; }
    if (a==b&&b==c) *tipo=1;
    else if (a==b||b==c||a==c) *tipo=2;
    else *tipo=3;
    double s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(void)
{
    return 0;
}