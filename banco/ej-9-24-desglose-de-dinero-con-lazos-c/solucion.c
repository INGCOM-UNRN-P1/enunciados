#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <math.h>
#include <assert.h>
#include <time.h>


bool desglosar_cambio(int monto, int *monedas_100, int *monedas_50, int *monedas_10)
{
    if (monto < 0 || monedas_100 == NULL || monedas_50 == NULL || monedas_10 == NULL)
    {
        return false;
    }
    *monedas_100 = monto / 100;
    monto %= 100;

    *monedas_50 = monto / 50;
    monto %= 50;

    *monedas_10 = monto / 10;
    return true;
}

void test_desglose_cambio(void)
{
    int m100 = 0, m50 = 0, m10 = 0;
    bool ok = desglosar_cambio(370, &m100, &m50, &m10);
    assert(ok && m100 == 3 && m50 == 1 && m10 == 2);
}

int main(void)
{
    return 0;
}