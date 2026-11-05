#ifndef EJERCICIO_EJ_5_6_FUNCIONES_MATEMATICAS_BASICAS_H
#define EJERCICIO_EJ_5_6_FUNCIONES_MATEMATICAS_BASICAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
/* Retorna NAN cuando b == 0. */
double dividir(double a, double b);

#endif /* EJERCICIO_EJ_5_6_FUNCIONES_MATEMATICAS_BASICAS_H */
