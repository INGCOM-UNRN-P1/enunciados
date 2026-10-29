#ifndef EJERCICIO_EJ_4_46_SUITE_DE_PRUEBAS_TARIFA_DE_EST_H
#define EJERCICIO_EJ_4_46_SUITE_DE_PRUEBAS_TARIFA_DE_EST_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación calcular_estacionamiento */
double calcular_estacionamiento(int minutos);
/* Operación test_estacionamiento_primera_hora */
void test_estacionamiento_primera_hora(void);
/* Operación test_estacionamiento_horas_adicionales */
void test_estacionamiento_horas_adicionales(void);
/* Operación test_estacionamiento_descuento_larga_estadia */
void test_estacionamiento_descuento_larga_estadia(void);
/* Operación test_estacionamiento_tope_maximo */
void test_estacionamiento_tope_maximo(void);

#endif /* EJERCICIO_EJ_4_46_SUITE_DE_PRUEBAS_TARIFA_DE_EST_H */
