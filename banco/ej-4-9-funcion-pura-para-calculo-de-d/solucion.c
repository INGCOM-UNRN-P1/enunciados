#include <assert.h>
#include <stdbool.h>

double aplicar_descuento(double precio_base, double porcentaje)
{
    if (precio_base < 0.0 || porcentaje < 0.0 || porcentaje > 100.0)
    {
        return -1.0;
    }
    return precio_base * (1.0 - (porcentaje / 100.0));
}

void test_descuento_normal(void)
{
    assert(aplicar_descuento(200.0, 25.0) == 150.0);
}

void test_descuento_cero(void)
{
    assert(aplicar_descuento(100.0, 0.0) == 100.0);
}

void test_descuento_total(void)
{
    assert(aplicar_descuento(100.0, 100.0) == 0.0);
}

void test_descuento_precio_invalido(void)
{
    assert(aplicar_descuento(-50.0, 10.0) == -1.0);
}

void test_descuento_porcentaje_invalido(void)
{
    assert(aplicar_descuento(100.0, 150.0) == -1.0);
}

int main(void)
{
    return 0;
}