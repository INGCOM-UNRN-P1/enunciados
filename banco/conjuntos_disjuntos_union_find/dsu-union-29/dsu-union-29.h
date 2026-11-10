#ifndef DSU_UNION_29_H
#define DSU_UNION_29_H
#include "../dsu-union-01/dsu_union_common.h"
#include <stdbool.h>
/* Checks parent/rank/size/component-count invariants of the canonical DSU. */
bool dsu_validate_invariants(const dsu_t *dsu);
#endif
