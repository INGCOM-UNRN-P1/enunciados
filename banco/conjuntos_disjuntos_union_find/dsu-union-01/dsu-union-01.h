#ifndef EJERCICIO_DSU_UNION_01_H
#define EJERCICIO_DSU_UNION_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación dsu_init */
void dsu_init(dsu_t *d, int n);
/* Operación dsu_find */
int dsu_find(dsu_t *d, int u);
/* Operación dsu_union */
void dsu_union(dsu_t *d, int u, int v);

#endif /* EJERCICIO_DSU_UNION_01_H */
