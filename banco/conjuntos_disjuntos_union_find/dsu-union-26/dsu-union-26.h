#ifndef DSU_UNION_26_H
#define DSU_UNION_26_H
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
typedef struct { size_t count; _Atomic size_t *parent; size_t *rank; atomic_bool lock; } dsu_atomic_t;
#define DSU_ATOMIC_INITIALIZER { 0u, NULL, NULL, ATOMIC_VAR_INIT(false) }
bool dsu_atomic_init(dsu_atomic_t *dsu, size_t count);
void dsu_atomic_destroy(dsu_atomic_t *dsu);
bool dsu_atomic_find(dsu_atomic_t *dsu, size_t element, size_t *representative);
bool dsu_atomic_union(dsu_atomic_t *dsu, size_t a, size_t b);
#endif
