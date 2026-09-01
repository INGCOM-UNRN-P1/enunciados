#ifndef EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_05_H
#define EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_05_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar */
void inicializar(RegistroSeguro_5 *r);
/* Operación validar_y_cargar */
int validar_y_cargar(RegistroSeguro_5 *r, const char *entrada);

#endif /* EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_05_H */
