#include <assert.h>
#include <stdbool.h>

double calc_sumar(double acumulador, double valor)
{
    return acumulador + valor;
}

double calc_restar(double acumulador, double valor)
{
    return acumulador - valor;
}

double calc_multiplicar(double acumulador, double valor)
{
    return acumulador * valor;
}

double calc_dividir(double acumulador, double valor, bool *ok)
{
    if (valor == 0.0)
    {
        *ok = false;
        return acumulador;
    }
    *ok = true;
    return acumulador / valor;
}

void test_secuencia_calculadora(void)
{
    double acc = 0.0;
    bool ok = false;

    acc = calc_sumar(acc, 50.0);
    acc = calc_multiplicar(acc, 2.0);
    acc = calc_restar(acc, 20.0);
    acc = calc_dividir(acc, 4.0, &ok);

    assert(ok == true);
    assert(acc == 20.0);
}

int main(void)
{
    return 0;
}