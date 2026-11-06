#ifndef EJERCICIO_GRAFO_RED_18_H
#define EJERCICIO_GRAFO_RED_18_H
#include <stddef.h>
#include <limits.h>
/* Matriz n*n, LLONG_MAX/4 = sin camino. Retorna 0, 1 si hay ciclo
 * negativo, -1 por argumentos inválidos y -2 si una suma desborda. */
int floyd_warshall(size_t n,long long *distancias);
#endif
