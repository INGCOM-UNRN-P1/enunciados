#ifndef EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_52_H
#define EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_52_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar */
void inicializar(RegistroSeguro_52 *r);
/* Operación validar_y_cargar */
int validar_y_cargar(RegistroSeguro_52 *r, const char *entrada);

#endif /* EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_52_H */
