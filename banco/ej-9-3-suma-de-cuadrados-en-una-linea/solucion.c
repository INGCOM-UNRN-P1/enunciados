#include <assert.h>

int calcular_suma_cuadrados(int limite)
{
    if (limite < 0)
    {
        return -1;
    }
    int acumulador = 0;
    for (int i = 1; i <= limite; i++)
    {
        acumulador += (i * i);
    }
    return acumulador;
}

void test_suma_cuadrados(void)
{
    assert(calcular_suma_cuadrados(0) == 0);
    assert(calcular_suma_cuadrados(3) == 14); // 1 + 4 + 9 = 14
    assert(calcular_suma_cuadrados(-5) == -1);
}

int main(void)
{
    return 0;
}