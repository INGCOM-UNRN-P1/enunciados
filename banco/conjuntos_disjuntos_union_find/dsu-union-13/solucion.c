#include "dsu-union-13.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int dsu13_resolver(size_t n, const int constraints[][3], size_t count,
                   int potentials[])
{
    if (n > INT_MAX || n > SIZE_MAX / sizeof(int64_t) ||
        (count && constraints == NULL) || (n && potentials == NULL)) {
        return -1;
    }
    for (size_t i = 0; i < count; ++i) {
        int a = constraints[i][0];
        int b = constraints[i][1];
        if (a < 0 || b < 0 || (size_t)a >= n || (size_t)b >= n) return -1;
    }
    int *parent = n ? malloc(n * sizeof(*parent)) : NULL;
    size_t *size = n ? malloc(n * sizeof(*size)) : NULL;
    int64_t *weight = n ? calloc(n, sizeof(*weight)) : NULL;
    if (n && (parent == NULL || size == NULL || weight == NULL)) {
        free(parent);
        free(size);
        free(weight);
        return -1;
    }
    for (size_t i = 0; i < n; ++i) {
        parent[i] = (int)i;
        size[i] = 1;
    }
    for (size_t i = 0; i < count; ++i) {
        int a = constraints[i][0];
        int b = constraints[i][1];
        int64_t difference = constraints[i][2];
        int ra = a, rb = b;
        int64_t wa = 0, wb = 0;
        while (parent[ra] != ra) { wa += weight[ra]; ra = parent[ra]; }
        while (parent[rb] != rb) { wb += weight[rb]; rb = parent[rb]; }
        if (ra == rb) {
            if (wb - wa != difference) {
                free(parent); free(size); free(weight); return 0;
            }
        } else if (size[ra] >= size[rb]) {
            parent[rb] = ra;
            weight[rb] = difference + wa - wb;
            size[ra] += size[rb];
        } else {
            parent[ra] = rb;
            weight[ra] = wb - wa - difference;
            size[rb] += size[ra];
        }
    }
    for (size_t i = 0; i < n; ++i) {
        int node = (int)i;
        int64_t potential = 0;
        while (parent[node] != node) {
            potential += weight[node];
            node = parent[node];
        }
        if (potential < INT_MIN || potential > INT_MAX) {
            free(parent); free(size); free(weight); return -1;
        }
        potentials[i] = (int)potential;
    }
    free(parent); free(size); free(weight);
    return 1;
}
