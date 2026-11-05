#include "ej-5-21-validador-de-fechas.h"

bool es_bisiesto(int anio)
{
    return anio > 0 && (anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0));
}

int dias_del_mes(int mes, int anio)
{
    static const int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (anio <= 0 || mes < 1 || mes > 12)
        return 0;
    return dias[mes - 1] + (mes == 2 && es_bisiesto(anio));
}

bool es_fecha_valida(int dia, int mes, int anio)
{
    int maximo = dias_del_mes(mes, anio);
    return dia >= 1 && dia <= maximo;
}

int dia_del_anio(int dia, int mes, int anio)
{
    if (!es_fecha_valida(dia, mes, anio))
        return 0;
    for (int m = 1; m < mes; m++)
        dia += dias_del_mes(m, anio);
    return dia;
}
