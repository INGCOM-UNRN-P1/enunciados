#ifndef EJERCICIO_DSU_UNION_07_H
#define EJERCICIO_DSU_UNION_07_H
#include <stddef.h>
typedef struct {size_t n;const size_t *parent;} dsu07_t;
size_t dsu07_count(const dsu07_t *);
#endif
