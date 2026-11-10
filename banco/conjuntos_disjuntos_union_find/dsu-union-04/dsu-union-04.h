#ifndef EJERCICIO_DSU_UNION_04_H
#define EJERCICIO_DSU_UNION_04_H
#include <stddef.h>
typedef struct {size_t n;size_t *parent;} dsu04_t;
int dsu04_find(dsu04_t *,size_t);
#endif
