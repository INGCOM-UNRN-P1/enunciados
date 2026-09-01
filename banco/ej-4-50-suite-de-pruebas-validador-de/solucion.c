#include <math.h>

#include <assert.h>
#include <stdbool.h>

bool es_primo(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void test_primos_menores_o_iguales_uno(void)
{
    assert(es_primo(0) == false);
    assert(es_primo(1) == false);
    assert(es_primo(-7) == false);
}

void test_primos_basicos(void)
{
    assert(es_primo(2) == true);
    assert(es_primo(3) == true);
    assert(es_primo(13) == true);
    assert(es_primo(997) == true);
}

void test_compuestos_impares(void)
{
    assert(es_primo(9) == false);
    assert(es_primo(25) == false);
    assert(es_primo(49) == false);
}

int main(void)
{
    return 0;
}