#include <assert.h>
#include <stdbool.h>

bool es_bisiesto_aux(int anio)
{
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool es_fecha_valida(int dia, int mes, int anio)
{
    if (anio <= 0 || mes < 1 || mes > 12 || dia < 1)
    {
        return false;
    }
    int dias_max = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias_max = 30;
    }
    else if (mes == 2)
    {
        dias_max = es_bisiesto_aux(anio) ? 29 : 28;
    }
    return dia <= dias_max;
}

void test_fecha_31_dias(void)
{
    assert(es_fecha_valida(31, 1, 2024) == true);
    assert(es_fecha_valida(32, 1, 2024) == false);
}

void test_fecha_30_dias(void)
{
    assert(es_fecha_valida(30, 4, 2024) == true);
    assert(es_fecha_valida(31, 4, 2024) == false);
}

void test_febrero_bisiesto(void)
{
    assert(es_fecha_valida(29, 2, 2024) == true);
    assert(es_fecha_valida(29, 2, 2023) == false);
}

void test_fecha_mes_invalido(void)
{
    assert(es_fecha_valida(15, 13, 2024) == false);
    assert(es_fecha_valida(15, 0, 2024) == false);
}

void correr_pruebas_fechas(void)
{
    test_fecha_31_dias();
    test_fecha_30_dias();
    test_febrero_bisiesto();
    test_fecha_mes_invalido();
}

int main(void)
{
    return 0;
}