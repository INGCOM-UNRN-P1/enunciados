#ifndef EJERCICIO_EJ_4_45_SUITE_DE_PRUEBAS_VALIDADOR_DE_H
#define EJERCICIO_EJ_4_45_SUITE_DE_PRUEBAS_VALIDADOR_DE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación es_bisiesto_aux */
bool es_bisiesto_aux(int anio);
/* Operación es_fecha_valida */
bool es_fecha_valida(int dia, int mes, int anio);
/* Operación test_fecha_31_dias */
void test_fecha_31_dias(void);
/* Operación test_fecha_30_dias */
void test_fecha_30_dias(void);
/* Operación test_febrero_bisiesto */
void test_febrero_bisiesto(void);
/* Operación test_fecha_mes_invalido */
void test_fecha_mes_invalido(void);
/* Operación correr_pruebas_fechas */
void correr_pruebas_fechas(void);

#endif /* EJERCICIO_EJ_4_45_SUITE_DE_PRUEBAS_VALIDADOR_DE_H */
