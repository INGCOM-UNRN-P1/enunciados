#ifndef EJERCICIO_EJ_4_32_TESTEO_DE_ANO_BISIESTO_EXHAUST_H
#define EJERCICIO_EJ_4_32_TESTEO_DE_ANO_BISIESTO_EXHAUST_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación es_bisiesto */
bool es_bisiesto(int anio);
/* Operación test_bisiesto_multiplo_4 */
void test_bisiesto_multiplo_4(void);
/* Operación test_no_bisiesto_comun */
void test_no_bisiesto_comun(void);
/* Operación test_no_bisiesto_fin_de_siglo */
void test_no_bisiesto_fin_de_siglo(void);
/* Operación test_bisiesto_cuatrisecular */
void test_bisiesto_cuatrisecular(void);
/* Operación test_bisiesto_invalido */
void test_bisiesto_invalido(void);

#endif /* EJERCICIO_EJ_4_32_TESTEO_DE_ANO_BISIESTO_EXHAUST_H */
