#ifndef EJERCICIO_GRAFO_RED_17_H
#define EJERCICIO_GRAFO_RED_17_H
#include <stddef.h>
#include <limits.h>
typedef struct {size_t desde,hasta;int peso;} arista_t;
int bellman_ford_ciclo_negativo(size_t n,const arista_t *e,size_t m,size_t origen,long long *d);
#endif
