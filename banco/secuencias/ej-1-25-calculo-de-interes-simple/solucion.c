#include "ej-1-25-calculo-de-interes-simple.h"
#include <math.h>
#include <stdio.h>

int interes_simple(double capital, double tasa_anual, double anios,
                   double *interes, double *monto)
{
    if (interes == NULL || monto == NULL || interes == monto ||
        !isfinite(capital) || !isfinite(tasa_anual) || !isfinite(anios) ||
        capital < 0 || tasa_anual < 0 || anios < 0)
        return -1;
    double calculado = capital * (tasa_anual / 100.0) * anios;
    double total = capital + calculado;
    if (!isfinite(calculado) || !isfinite(total))
        return -1;
    *interes = calculado;
    *monto = total;
    return 0;
}

int main(void)
{
    double capital, tasa, anios, interes, monto;
    if (scanf("%lf %lf %lf", &capital, &tasa, &anios) != 3 ||
        interes_simple(capital, tasa, anios, &interes, &monto) != 0)
        return 1;
    printf("Interés ganado: %.2f\nMonto final: %.2f\n", interes, monto);
    return 0;
}
