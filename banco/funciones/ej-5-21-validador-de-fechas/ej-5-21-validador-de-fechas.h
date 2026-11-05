#ifndef EJ_5_21_VALIDADOR_DE_FECHAS_H
#define EJ_5_21_VALIDADOR_DE_FECHAS_H

#include <stdbool.h>

bool es_bisiesto(int anio);
int dias_del_mes(int mes, int anio);
bool es_fecha_valida(int dia, int mes, int anio);
int dia_del_anio(int dia, int mes, int anio);

#endif
