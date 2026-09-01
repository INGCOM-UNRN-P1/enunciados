#ifndef EJERCICIO_EJ_4_51_TESTEO_DE_FUNCIONES_CON_CODIGO_H
#define EJERCICIO_EJ_4_51_TESTEO_DE_FUNCIONES_CON_CODIGO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación calcular_velocidad */
int calcular_velocidad(double distancia, double tiempo, double *velocidad);
/* Operación test_velocidad_exito */
void test_velocidad_exito(void);
/* Operación test_velocidad_distancia_invalida */
void test_velocidad_distancia_invalida(void);
/* Operación test_velocidad_tiempo_invalido */
void test_velocidad_tiempo_invalido(void);
/* Operación test_velocidad_puntero_nulo */
void test_velocidad_puntero_nulo(void);

#endif /* EJERCICIO_EJ_4_51_TESTEO_DE_FUNCIONES_CON_CODIGO_H */
