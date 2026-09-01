#include <stdbool.h>

double saldo_global = 0.0;

void depositar(double monto)
{
    if (monto > 0)
    {
        saldo_global += monto;
    }
}

bool extraer(double monto)
{
    if (monto > 0 && saldo_global >= monto)
    {
        saldo_global -= monto;
        return true;
    }
    return false;
}

int main(void)
{
    return 0;
}