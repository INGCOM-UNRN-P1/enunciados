#include <assert.h>

int cuadrado(int n)
{
    return n * n;
}

int main(void)
{
    assert(cuadrado(4) == 16);
    assert(cuadrado(-3) == 9);
    return 0;
}