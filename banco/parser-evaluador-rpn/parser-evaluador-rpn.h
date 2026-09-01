#ifndef EJERCICIO_PARSER_EVALUADOR_RPN_H
#define EJERCICIO_PARSER_EVALUADOR_RPN_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación rpn_init */
void rpn_init(PilaRPN *p);
/* Operación rpn_push */
int rpn_push(PilaRPN *p, long v);
/* Operación rpn_pop */
int rpn_pop(PilaRPN *p, long *out);
/* Operación evaluar_linea */
void evaluar_linea(char *linea);

#endif /* EJERCICIO_PARSER_EVALUADOR_RPN_H */
