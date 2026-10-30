#ifndef EJERCICIO_DSU_UNION_01_H
#define EJERCICIO_DSU_UNION_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación dsu_init */
void dsu_init(t_DSU *d, int n);
/* Operación dsu_find */
int dsu_find(t_DSU *d, int u);
/* Operación dsu_union */
void dsu_union(t_DSU *d, int u, int v);

#endif /* EJERCICIO_DSU_UNION_01_H */
