#include <assert.h>

long long calcular_fibonacci(int posicion)
{
    if (posicion < 0)
    {
        return -1;
    }
    if (posicion == 0)
    {
        return 0;
    }
    if (posicion == 1)
    {
        return 1;
    }

    long long anterior = 0;
    long long actual = 1;

    for (int i = 2; i <= posicion; i++)
    {
        long long siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }
    return actual;
}

void test_fibonacci(void)
{
    assert(calcular_fibonacci(0) == 0);
    assert(calcular_fibonacci(1) == 1);
    assert(calcular_fibonacci(6) == 8);
    assert(calcular_fibonacci(10) == 55);
}

int main(void)
{
    return 0;
}