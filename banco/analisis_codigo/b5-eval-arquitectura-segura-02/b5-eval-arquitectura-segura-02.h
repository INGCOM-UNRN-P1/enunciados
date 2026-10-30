#ifndef EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_02_H
#define EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_02_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar */
void inicializar(registro_seguro_2_t *r);
/* Operación validar_y_cargar */
int validar_y_cargar(registro_seguro_2_t *r, const char *entrada);

#endif /* EJERCICIO_B5_EVAL_ARQUITECTURA_SEGURA_02_H */
