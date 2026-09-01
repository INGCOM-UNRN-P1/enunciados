#ifndef EJERCICIO_EJ_4_9_FUNCION_PURA_PARA_CALCULO_DE_D_H
#define EJERCICIO_EJ_4_9_FUNCION_PURA_PARA_CALCULO_DE_D_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación aplicar_descuento */
double aplicar_descuento(double precio_base, double porcentaje);
/* Operación test_descuento_normal */
void test_descuento_normal(void);
/* Operación test_descuento_cero */
void test_descuento_cero(void);
/* Operación test_descuento_total */
void test_descuento_total(void);
/* Operación test_descuento_precio_invalido */
void test_descuento_precio_invalido(void);
/* Operación test_descuento_porcentaje_invalido */
void test_descuento_porcentaje_invalido(void);

#endif /* EJERCICIO_EJ_4_9_FUNCION_PURA_PARA_CALCULO_DE_D_H */
