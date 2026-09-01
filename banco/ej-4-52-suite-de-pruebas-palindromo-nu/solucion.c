#include <assert.h>
#include <stdbool.h>

int invertir_entero(int n)
{
    int invertido = 0;
    while (n > 0)
    {
        invertido = (invertido * 10) + (n % 10);
        n /= 10;
    }
    return invertido;
}

bool es_numero_capicua(int n)
{
    if (n < 0)
    {
        return false;
    }
    if (n < 10)
    {
        return true;
    }
    return n == invertir_entero(n);
}

void test_capicua_un_digito(void)
{
    assert(es_numero_capicua(0) == true);
    assert(es_numero_capicua(7) == true);
}

void test_capicua_multiples_digitos(void)
{
    assert(es_numero_capicua(1221) == true);
    assert(es_numero_capicua(12321) == true);
    assert(es_numero_capicua(123) == false);
    assert(es_numero_capicua(-121) == false);
}

int main(void)
{
    return 0;
}