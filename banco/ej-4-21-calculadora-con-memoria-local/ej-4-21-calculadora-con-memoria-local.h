#ifndef EJERCICIO_EJ_4_21_CALCULADORA_CON_MEMORIA_LOCAL_H
#define EJERCICIO_EJ_4_21_CALCULADORA_CON_MEMORIA_LOCAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación calc_sumar */
double calc_sumar(double acumulador, double valor);
/* Operación calc_restar */
double calc_restar(double acumulador, double valor);
/* Operación calc_multiplicar */
double calc_multiplicar(double acumulador, double valor);
/* Operación calc_dividir */
double calc_dividir(double acumulador, double valor, bool *ok);
/* Operación test_secuencia_calculadora */
void test_secuencia_calculadora(void);

#endif /* EJERCICIO_EJ_4_21_CALCULADORA_CON_MEMORIA_LOCAL_H */
