#ifndef EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_63_H
#define EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_63_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar */
void inicializar(RegistroSeguro_63 *r);
/* Operación validar_y_cargar */
int validar_y_cargar(RegistroSeguro_63 *r, const char *entrada);

#endif /* EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_63_H */
