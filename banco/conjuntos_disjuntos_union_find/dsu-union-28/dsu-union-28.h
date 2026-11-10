#ifndef DSU_UNION_28_H
#define DSU_UNION_28_H
#include "../dsu-union-01/dsu_union_common.h"
#include <stdbool.h>
#include <stddef.h>
/* Counts parent links traversed by the queries without mutating the DSU. */
size_t dsu_measure_find_steps(const dsu_t *dsu, const size_t *elements, size_t count, bool *valid);
#endif
