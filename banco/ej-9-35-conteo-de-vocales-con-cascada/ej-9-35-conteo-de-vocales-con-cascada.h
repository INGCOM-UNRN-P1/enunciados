#ifndef EJERCICIO_EJ_9_35_CONTEO_DE_VOCALES_CON_CASCADA_H
#define EJERCICIO_EJ_9_35_CONTEO_DE_VOCALES_CON_CASCADA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación es_vocal */
bool es_vocal(char caracter);
/* Operación contar_vocales_secuencia */
int contar_vocales_secuencia(const char caracteres[], int longitud);
/* Operación test_conteo_vocales */
void test_conteo_vocales(void);

#endif /* EJERCICIO_EJ_9_35_CONTEO_DE_VOCALES_CON_CASCADA_H */
