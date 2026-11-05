#ifndef ARBOL_BIN_21_H
#define ARBOL_BIN_21_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_expr_21 { double numero; char operador; struct nodo_expr_21 *izq, *der; } nodo_expr_21_t;
bool evaluar_expresion_21(const nodo_expr_21_t *raiz, double *resultado);
#endif
