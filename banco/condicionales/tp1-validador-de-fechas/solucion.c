#include "fecha.h"

#define DIAS_MES_LARGO 31
#define DIAS_MES_CORTO 30
#define DIAS_FEBRERO_BISIESTO 29
#define DIAS_FEBRERO_COMUN 28

bool es_bisiesto(int anio)
{
    bool regla_comun = (anio % 4 == 0 && anio % 100 != 0);
    bool regla_secular = (anio % 400 == 0);
    return (anio > 0 && (regla_comun || regla_secular));
}

int dias_en_mes(int mes, int anio)
{
    switch (mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return DIAS_MES_LARGO;
        case 4:
        case 6:
        case 9:
        case 11:
            return DIAS_MES_CORTO;
        case 2:
            if (es_bisiesto(anio))
            {
                return DIAS_FEBRERO_BISIESTO;
            }
            return DIAS_FEBRERO_COMUN;
        default:
            return 0;
    }
}

bool es_fecha_valida(int dia, int mes, int anio)
{
    int dias_max;

    if (anio <= 0 || mes < 1 || mes > 12)
    {
        return false;
    }

    dias_max = dias_en_mes(mes, anio);
    return (dia >= 1 && dia <= dias_max);
}

#include <stdio.h>

static int leer_rango(const char *mensaje, int minimo, int maximo, int *valor)
{
    do {
        printf("%s", mensaje);
        if (scanf("%d", valor) != 1)
            return 0;
    } while (*valor < minimo || *valor > maximo);
    return 1;
}

int main(void)
{
    char continuar;
    do {
        int anio, mes, dia;
        if (!leer_rango("Ingrese año (ej: 2026): ", 1, 9999, &anio) ||
            !leer_rango("Ingrese mes (1-12): ", 1, 12, &mes) ||
            !leer_rango("Ingrese día (1-31): ", 1, 31, &dia))
            return 1;
        printf("La fecha %02d/%02d/%04d %ses válida.\n", dia, mes, anio,
               es_fecha_valida(dia, mes, anio) ? "" : "NO ");
        printf("El año %d %ses bisiesto.\n", anio, es_bisiesto(anio) ? "" : "no ");
        printf("¿Desea validar otra fecha? (s/n): ");
        if (scanf(" %c", &continuar) != 1)
            return 0;
    } while (continuar == 's' || continuar == 'S');
    return 0;
}
