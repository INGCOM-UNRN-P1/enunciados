#ifndef EJERCICIO_DSU_UNION_01_H
#define EJERCICIO_DSU_UNION_01_H
#include "dsu_union_common.h"
void dsu_init(dsu_t *d,int n); int dsu_find(dsu_t *d,int u); void dsu_union(dsu_t *d,int u,int v); void dsu_destroy(dsu_t *d);
#endif
