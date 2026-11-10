#ifndef EJERCICIO_DSU_UNION_03_H
#define EJERCICIO_DSU_UNION_03_H
#include <stddef.h>
typedef struct {size_t n;size_t *parent;} dsu03_t;
int dsu03_find(dsu03_t *,size_t);
#endif
