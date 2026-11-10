#ifndef DSU_UNION_COMMON_H
#define DSU_UNION_COMMON_H
#include <stddef.h>
typedef struct { size_t n; size_t *parent; size_t *rank; size_t *size; size_t components; } dsu_t;
#endif
