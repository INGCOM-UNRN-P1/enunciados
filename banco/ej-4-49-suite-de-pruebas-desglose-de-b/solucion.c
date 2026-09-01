#include <assert.h>
#include <stdbool.h>

bool desglosar_monto(int monto, int *b1000, int *b500, int *b200, int *b100)
{
    if (monto <= 0 || monto % 100 != 0 || !b1000 || !b500 || !b200 || !b100)
    {
        return false;
    }
    *b1000 = monto / 1000;
    monto %= 1000;

    *b500 = monto / 500;
    monto %= 500;

    *b200 = monto / 200;
    monto %= 200;

    *b100 = monto / 100;
    return true;
}

void test_desglose_combinado(void)
{
    int mil = 0, quin = 0, dosc = 0, cien = 0;
    bool ok = desglosar_monto(3800, &mil, &quin, &dosc, &cien);
    assert(ok == true);
    assert(mil == 3 && quin == 1 && dosc == 1 && cien == 1);
}

void test_desglose_monto_invalido(void)
{
    int mil = 0, quin = 0, dosc = 0, cien = 0;
    assert(desglosar_monto(350, &mil, &quin, &dosc, &cien) == false);
    assert(desglosar_monto(-100, &mil, &quin, &dosc, &cien) == false);
}

int main(void)
{
    return 0;
}