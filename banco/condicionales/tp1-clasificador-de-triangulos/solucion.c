#include "triangulo.h"

#include <math.h>

bool es_triangulo_valido(float lado_a, float lado_b, float lado_c)
{
    if (!isfinite(lado_a) || !isfinite(lado_b) || !isfinite(lado_c) ||
        lado_a <= 0 || lado_b <= 0 || lado_c <= 0)
        return false;

    /* Convertir antes de sumar evita desbordar la precisión de float. */
    double a = lado_a, b = lado_b, c = lado_c;
    return a + b > c && a + c > b && b + c > a;
}

int clasificar_triangulo(float lado_a, float lado_b, float lado_c)
{
    if (!es_triangulo_valido(lado_a, lado_b, lado_c))
        return TIPO_INVALIDO;
    if (lado_a == lado_b && lado_b == lado_c)
        return TIPO_EQUILATERO;
    if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c)
        return TIPO_ISOSCELES;
    return TIPO_ESCALENO;
}

bool es_triangulo_rectangulo(float lado_a, float lado_b, float lado_c)
{
    if (!es_triangulo_valido(lado_a, lado_b, lado_c))
        return false;

    double a = lado_a, b = lado_b, c = lado_c;
    if (a > c) { double temporal = a; a = c; c = temporal; }
    if (b > c) { double temporal = b; b = c; c = temporal; }
    return fabs(c * c - (a * a + b * b)) < 0.001;
}
