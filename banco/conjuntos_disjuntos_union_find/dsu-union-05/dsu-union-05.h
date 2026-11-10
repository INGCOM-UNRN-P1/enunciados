#ifndef EJERCICIO_DSU_UNION_05_H
#define EJERCICIO_DSU_UNION_05_H
#include <stddef.h>
typedef struct {size_t n;size_t *parent;size_t *rank;} dsu05_t;
/* 1 si fusiona, 0 si ya estaban unidos, -1 ante entrada inválida. */
int dsu05_union(dsu05_t *,size_t,size_t);
#endif
