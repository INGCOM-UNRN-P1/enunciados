#ifndef EJERCICIO_EJ_9_46_VERIFICADOR_DE_CUITCUIL_CON_MO_H
#define EJERCICIO_EJ_9_46_VERIFICADOR_DE_CUITCUIL_CON_MO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación calcular_digito_verificador_cuit */
int calcular_digito_verificador_cuit(const int primeros_10_digitos[10]);
/* Operación test_cuit_verificador */
void test_cuit_verificador(void);

#endif /* EJERCICIO_EJ_9_46_VERIFICADOR_DE_CUITCUIL_CON_MO_H */
