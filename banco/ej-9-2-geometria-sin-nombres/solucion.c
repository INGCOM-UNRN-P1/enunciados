#include <assert.h>

double calcular_area_triangulo(double base, double altura)
{
    if (base <= 0.0 || altura <= 0.0)
    {
        return -1.0;
    }
    return (base * altura) / 2.0;
}

void test_area_triangulo(void)
{
    assert(calcular_area_triangulo(10.0, 5.0) == 25.0);
    assert(calcular_area_triangulo(-2.0, 5.0) == -1.0);
}

int main(void)
{
    return 0;
}