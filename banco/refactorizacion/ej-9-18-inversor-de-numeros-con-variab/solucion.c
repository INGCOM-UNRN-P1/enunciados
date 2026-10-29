#include <assert.h>
#include <stdlib.h>

int invertir_numero_entero(int numero)
{
    int signo = (numero < 0) ? -1 : 1;
    int n = abs(numero);
    int invertido = 0;

    while (n > 0)
    {
        invertido = (invertido * 10) + (n % 10);
        n /= 10;
    }
    return invertido * signo;
}

void test_invertir_numero(void)
{
    assert(invertir_numero_entero(1234) == 4321);
    assert(invertir_numero_entero(-580) == -85);
    assert(invertir_numero_entero(0) == 0);
}

int main(void)
{
    return 0;
}