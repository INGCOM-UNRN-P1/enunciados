#include <assert.h>
#include <stddef.h>

#define CANTIDAD_DIGITOS_BASE_CUIT 10

int calcular_digito_verificador_cuit(const int primeros_10_digitos[10])
{
    if (primeros_10_digitos == NULL)
    {
        return -1;
    }
    static const int factores_ponderacion[10] = {5, 4, 3, 2, 7, 6, 5, 4, 3, 2};

    int suma_ponderada = 0;
    for (int i = 0; i < CANTIDAD_DIGITOS_BASE_CUIT; i++)
    {
        if (primeros_10_digitos[i] < 0 || primeros_10_digitos[i] > 9)
        {
            return -1;
        }
        suma_ponderada += (primeros_10_digitos[i] * factores_ponderacion[i]);
    }

    int resto = suma_ponderada % 11;
    int digito_calculado = 11 - resto;

    if (digito_calculado == 11)
    {
        return 0;
    }
    if (digito_calculado == 10)
    {
        return 9;
    }
    return digito_calculado;
}

void test_cuit_verificador(void)
{
    int digitos_test[10] = {2, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    int dv = calcular_digito_verificador_cuit(digitos_test);
    assert(dv >= 0 && dv <= 9);
}

int main(void)
{
    return 0;
}