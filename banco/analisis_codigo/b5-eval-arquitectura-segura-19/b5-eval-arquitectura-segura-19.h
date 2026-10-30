#ifndef EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_19_H
#define EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_19_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar */
void inicializar(RegistroSeguro_19 *r);
/* Operación validar_y_cargar */
int validar_y_cargar(RegistroSeguro_19 *r, const char *entrada);

#endif /* EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_19_H */
