#include <assert.h>

long long calcular_sumatoria_gauss(int limite_superior)
{
    if (limite_superior < 0)
    {
        return -1;
    }
    long long n = limite_superior;
    return (n * (n + 1)) / 2;
}

void test_sumatoria_gauss(void)
{
    assert(calcular_sumatoria_gauss(0) == 0);
    assert(calcular_sumatoria_gauss(10) == 55);
    assert(calcular_sumatoria_gauss(100) == 5050);
    assert(calcular_sumatoria_gauss(-5) == -1);
}

int main(void)
{
    return 0;
}