#include "dsu-union-20.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

static int root_of(int parent[], int node)
{
    while (parent[node] != node) {
        parent[node] = parent[parent[node]];
        node = parent[node];
    }
    return node;
}

static void unite(int parent[], int size[], int a, int b)
{
    a = root_of(parent, a);
    b = root_of(parent, b);
    if (a == b) return;
    if (size[a] < size[b]) { int t = a; a = b; b = t; }
    parent[b] = a;
    size[a] += size[b];
}

static size_t component_count(size_t n, const int edges[][2], size_t m,
                              size_t omitted, int parent[], int size[])
{
    for (size_t i = 0; i < n; ++i) { parent[i] = (int)i; size[i] = 1; }
    size_t components = n;
    for (size_t i = 0; i < m; ++i) {
        if (i == omitted) continue;
        int a = edges[i][0], b = edges[i][1];
        if (root_of(parent, a) != root_of(parent, b)) {
            unite(parent, size, a, b);
            --components;
        }
    }
    return components;
}

int dsu20_contar_puentes(size_t n, const int edges[][2], size_t m)
{
    if (n > 2000 || m > 2000 || n > INT_MAX ||
        n > SIZE_MAX / sizeof(int) || (m != 0 && edges == NULL)) return -1;
    int *parent = n ? malloc(n * sizeof(*parent)) : NULL;
    int *size = n ? malloc(n * sizeof(*size)) : NULL;
    if (n && (parent == NULL || size == NULL)) {
        free(parent); free(size); return -1;
    }
    for (size_t i = 0; i < m; ++i) {
        if (edges[i][0] < 0 || edges[i][1] < 0 ||
            (size_t)edges[i][0] >= n || (size_t)edges[i][1] >= n) {
            free(parent); free(size); return -1;
        }
    }
    size_t original = component_count(n, edges, m, SIZE_MAX, parent, size);
    int bridges = 0;
    for (size_t i = 0; i < m; ++i) {
        if (component_count(n, edges, m, i, parent, size) > original) ++bridges;
    }
    free(parent); free(size);
    return bridges;
}
