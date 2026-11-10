#ifndef EJERCICIO_DSU_UNION_06_H
#define EJERCICIO_DSU_UNION_06_H
#include <stddef.h>
typedef struct {size_t n;size_t *parent;size_t *size;} dsu06_t;
int dsu06_union(dsu06_t *,size_t,size_t);
#endif
