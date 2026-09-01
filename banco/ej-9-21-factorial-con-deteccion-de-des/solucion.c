#include <assert.h>

#define MAX_N_FACTORIAL_64BITS 20

long long calcular_factorial(int n)
{
    if (n < 0 || n > MAX_N_FACTORIAL_64BITS)
    {
        return -1;
    }
    long long resultado = 1;
    for (int factor = 2; factor <= n; factor++)
    {
        resultado *= factor;
    }
    return resultado;
}

void test_factorial(void)
{
    assert(calcular_factorial(0) == 1);
    assert(calcular_factorial(5) == 120);
    assert(calcular_factorial(21) == -1); // Error de desbordamiento
}

int main(void)
{
    return 0;
}