#include <assert.h>
#include <stddef.h>

int calcular_velocidad(double distancia, double tiempo, double *velocidad)
{
    if (velocidad == NULL)
    {
        return 3;
    }
    if (distancia < 0.0)
    {
        return 1;
    }
    if (tiempo <= 0.0)
    {
        return 2;
    }
    *velocidad = distancia / tiempo;
    return 0;
}

void test_velocidad_exito(void)
{
    double v = 0.0;
    int codigo = calcular_velocidad(100.0, 2.0, &v);
    assert(codigo == 0);
    assert(v == 50.0);
}

void test_velocidad_distancia_invalida(void)
{
    double v = -99.0;
    int codigo = calcular_velocidad(-10.0, 2.0, &v);
    assert(codigo == 1);
    assert(v == -99.0);
}

void test_velocidad_tiempo_invalido(void)
{
    double v = -99.0;
    int codigo = calcular_velocidad(100.0, 0.0, &v);
    assert(codigo == 2);
    assert(v == -99.0);
}

void test_velocidad_puntero_nulo(void)
{
    int codigo = calcular_velocidad(100.0, 2.0, NULL);
    assert(codigo == 3);
}

int main(void)
{
    return 0;
}