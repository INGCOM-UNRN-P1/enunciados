#ifndef EJERCICIO_EJ_9_24_DESGLOSE_DE_DINERO_CON_LAZOS_C_H
#define EJERCICIO_EJ_9_24_DESGLOSE_DE_DINERO_CON_LAZOS_C_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación desglosar_cambio */
bool desglosar_cambio(int monto, int *monedas_100, int *monedas_50, int *monedas_10);
/* Operación test_desglose_cambio */
void test_desglose_cambio(void);

#endif /* EJERCICIO_EJ_9_24_DESGLOSE_DE_DINERO_CON_LAZOS_C_H */
