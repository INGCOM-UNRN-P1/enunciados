#ifndef EJERCICIO_EJ_4_49_SUITE_DE_PRUEBAS_DESGLOSE_DE_B_H
#define EJERCICIO_EJ_4_49_SUITE_DE_PRUEBAS_DESGLOSE_DE_B_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación desglosar_monto */
bool desglosar_monto(int monto, int *b1000, int *b500, int *b200, int *b100);
/* Operación test_desglose_combinado */
void test_desglose_combinado(void);
/* Operación test_desglose_monto_invalido */
void test_desglose_monto_invalido(void);

#endif /* EJERCICIO_EJ_4_49_SUITE_DE_PRUEBAS_DESGLOSE_DE_B_H */
