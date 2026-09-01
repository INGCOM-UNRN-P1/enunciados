#ifndef EJERCICIO_EJ_4_54_SUITE_DE_PRUEBAS_CONVERSION_DE_H
#define EJERCICIO_EJ_4_54_SUITE_DE_PRUEBAS_CONVERSION_DE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación segundos_a_tiempo */
bool segundos_a_tiempo(int total_segundos, int *horas, int *minutos, int *segundos);
/* Operación test_segundos_a_tiempo_normal */
void test_segundos_a_tiempo_normal(void);
/* Operación test_segundos_a_tiempo_cero */
void test_segundos_a_tiempo_cero(void);
/* Operación test_segundos_a_tiempo_invalido */
void test_segundos_a_tiempo_invalido(void);

#endif /* EJERCICIO_EJ_4_54_SUITE_DE_PRUEBAS_CONVERSION_DE_H */
