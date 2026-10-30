#ifndef EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_23_H
#define EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_23_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar */
void inicializar(registro_seguro_23_t *r);
/* Operación validar_y_cargar */
int validar_y_cargar(registro_seguro_23_t *r, const char *entrada);

#endif /* EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_23_H */
