#ifndef EJERCICIO_EJ_4_53_SUITE_DE_PRUEBAS_VALIDADOR_DE_H
#define EJERCICIO_EJ_4_53_SUITE_DE_PRUEBAS_VALIDADOR_DE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación lados_cercanos */
bool lados_cercanos(double x, double y);
/* Operación clasificar_triangulo */
int clasificar_triangulo(double a, double b, double c);
/* Operación test_triangulo_invalido */
void test_triangulo_invalido(void);
/* Operación test_triangulo_tipos */
void test_triangulo_tipos(void);

#endif /* EJERCICIO_EJ_4_53_SUITE_DE_PRUEBAS_VALIDADOR_DE_H */
