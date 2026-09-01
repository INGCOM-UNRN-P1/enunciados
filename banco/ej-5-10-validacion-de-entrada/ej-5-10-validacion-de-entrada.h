#ifndef EJERCICIO_EJ_5_10_VALIDACION_DE_ENTRADA_H
#define EJERCICIO_EJ_5_10_VALIDACION_DE_ENTRADA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Valida si valor esta dentro de min y max */
bool validar_rango(int valor, int min, int max);
/* Valida si valor es mayor a 0 */
bool validar_positivo(double valor);

#endif /* EJERCICIO_EJ_5_10_VALIDACION_DE_ENTRADA_H */
