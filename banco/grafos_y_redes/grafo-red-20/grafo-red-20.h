#ifndef EJERCICIO_GRAFO_RED_20_H
#define EJERCICIO_GRAFO_RED_20_H
#include <stddef.h>
#include <limits.h>
typedef struct {size_t u,v;int peso;} arista_kruskal_t;
int kruskal_mst(size_t n,arista_kruskal_t *e,size_t m,arista_kruskal_t *sel,size_t cap,size_t *count);
#endif
