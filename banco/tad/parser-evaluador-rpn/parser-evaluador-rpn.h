#ifndef EJERCICIO_PARSER_EVALUADOR_RPN_H
#define EJERCICIO_PARSER_EVALUADOR_RPN_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación rpn_init */
void rpn_init(pila_rpn_t *p);
/* Operación rpn_push */
int rpn_push(pila_rpn_t *p, long v);
/* Operación rpn_pop */
int rpn_pop(pila_rpn_t *p, long *out);
/* Operación evaluar_linea */
void evaluar_linea(char *linea);

#endif /* EJERCICIO_PARSER_EVALUADOR_RPN_H */
