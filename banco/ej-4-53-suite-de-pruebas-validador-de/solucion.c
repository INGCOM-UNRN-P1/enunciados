#include <stdlib.h>

#include <assert.h>
#include <math.h>
#include <stdbool.h>

bool lados_cercanos(double x, double y)
{
    return fabs(x - y) < 1e-6;
}

int clasificar_triangulo(double a, double b, double c)
{
    if (a <= 0.0 || b <= 0.0 || c <= 0.0)
    {
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return 0; // Desigualdad triangular violada
    }
    if (lados_cercanos(a, b) && lados_cercanos(b, c))
    {
        return 1; // Equilátero
    }
    if (lados_cercanos(a, b) || lados_cercanos(a, c) || lados_cercanos(b, c))
    {
        return 2; // Isósceles
    }
    return 3; // Escaleno
}

void test_triangulo_invalido(void)
{
    assert(clasificar_triangulo(1.0, 2.0, 3.0) == 0); // Degenerado
    assert(clasificar_triangulo(-1.0, 2.0, 2.0) == 0);
}

void test_triangulo_tipos(void)
{
    assert(clasificar_triangulo(5.0, 5.0, 5.0) == 1);
    assert(clasificar_triangulo(5.0, 5.0, 8.0) == 2);
    assert(clasificar_triangulo(3.0, 4.0, 5.0) == 3);
}

int main(void)
{
    return 0;
}