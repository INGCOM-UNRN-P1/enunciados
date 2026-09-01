#ifndef EJERCICIO_EJ_4_18_CONVERSOR_DE_TEMPERATURAS_DESA_H
#define EJERCICIO_EJ_4_18_CONVERSOR_DE_TEMPERATURAS_DESA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación son_cercanos */
bool son_cercanos(double a, double b, double eps);
/* Operación celsius_a_fahrenheit */
double celsius_a_fahrenheit(double c);
/* Operación fahrenheit_a_celsius */
double fahrenheit_a_celsius(double f);
/* Operación celsius_a_kelvin */
double celsius_a_kelvin(double c);
/* Operación test_celsius_a_fahrenheit_cero */
void test_celsius_a_fahrenheit_cero(void);
/* Operación test_celsius_a_fahrenheit_ebullicion */
void test_celsius_a_fahrenheit_ebullicion(void);
/* Operación test_celsius_a_kelvin_cero */
void test_celsius_a_kelvin_cero(void);

#endif /* EJERCICIO_EJ_4_18_CONVERSOR_DE_TEMPERATURAS_DESA_H */
