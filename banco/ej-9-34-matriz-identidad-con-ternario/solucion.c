#include <assert.h>

int obtener_valor_identidad(int fila, int columna)
{
    if (fila < 0 || columna < 0)
    {
        return -1;
    }
    if (fila == columna)
    {
        return 1;
    }
    return 0;
}

void test_valor_identidad(void)
{
    assert(obtener_valor_identidad(0, 0) == 1);
    assert(obtener_valor_identidad(2, 2) == 1);
    assert(obtener_valor_identidad(0, 3) == 0);
    assert(obtener_valor_identidad(-1, 0) == -1);
}

int main(void)
{
    return 0;
}