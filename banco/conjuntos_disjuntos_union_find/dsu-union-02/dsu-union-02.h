#ifndef EJERCICIO_DSU_UNION_02_H
#define EJERCICIO_DSU_UNION_02_H
#include <stddef.h>
#include <stdbool.h>
typedef struct {size_t n;size_t *parent;} dsu02_t;
bool dsu02_init(dsu02_t *,size_t);void dsu02_destroy(dsu02_t *);
#endif
