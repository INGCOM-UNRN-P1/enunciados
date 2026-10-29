#ifndef EJERCICIO_EJ_4_19_SIMULACION_DE_CRONOMETRO_SIN_E_H
#define EJERCICIO_EJ_4_19_SIMULACION_DE_CRONOMETRO_SIN_E_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación tiempo_avanzar */
int tiempo_avanzar(int tiempo_actual, int segundos_delta);
/* Operación tiempo_reiniciar */
int tiempo_reiniciar(void);
/* Operación tiempo_obtener_minutos */
int tiempo_obtener_minutos(int tiempo_total);
/* Operación tiempo_obtener_segundos */
int tiempo_obtener_segundos(int tiempo_total);
/* Operación test_cronometro_avance */
void test_cronometro_avance(void);

#endif /* EJERCICIO_EJ_4_19_SIMULACION_DE_CRONOMETRO_SIN_E_H */
