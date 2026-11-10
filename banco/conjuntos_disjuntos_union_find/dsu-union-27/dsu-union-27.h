#ifndef DSU_UNION_27_H
#define DSU_UNION_27_H
#include "../dsu-union-01/dsu_union_common.h"
#include <stddef.h>
/* Compresses every node, not only nodes queried by a caller. Returns changed links. */
size_t dsu_flatten_all(dsu_t *dsu);
#endif
