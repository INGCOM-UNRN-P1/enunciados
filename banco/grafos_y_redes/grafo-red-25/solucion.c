#include "grafo-red-25.h"
#include <limits.h>
#include <stddef.h>

/* Finds one augmenting path using depth-first search and returns its
 * bottleneck. */
static int camino_dfs(size_t n, const int *r, size_t u, size_t t, int *padre,
                      unsigned char *visitado) {
  visitado[u] = 1;
  if (u == t)
    return 1;
  for (size_t v = 0; v < n; ++v) {
    if (r[u * n + v] > 0 && !visitado[v]) {
      padre[v] = (int)u;
      if (camino_dfs(n, r, v, t, padre, visitado))
        return 1;
    }
  }
  return 0;
}

/* Ford-Fulkerson over an in-place n*n residual matrix. */
int ford_fulkerson(size_t n, int *r, size_t s, size_t t) {
  if (n < 2 || n > 128 || !r || s >= n || t >= n || s == t)
    return -1;
  for (size_t i = 0; i < n * n; ++i)
    if (r[i] < 0)
      return -1;

  int padre[128];
  unsigned char visitado[128];
  int flujo = 0;
  for (;;) {
    for (size_t i = 0; i < n; ++i) {
      padre[i] = -1;
      visitado[i] = 0;
    }
    if (!camino_dfs(n, r, s, t, padre, visitado))
      return flujo;

    int aumento = INT_MAX;
    for (size_t v = t; v != s; v = (size_t)padre[v]) {
      size_t u = (size_t)padre[v];
      if (r[u * n + v] < aumento)
        aumento = r[u * n + v];
    }
    if (aumento > INT_MAX - flujo)
      return -1;
    for (size_t v = t; v != s; v = (size_t)padre[v]) {
      size_t u = (size_t)padre[v];
      if (r[v * n + u] > INT_MAX - aumento)
        return -1;
    }
    for (size_t v = t; v != s; v = (size_t)padre[v]) {
      size_t u = (size_t)padre[v];
      r[u * n + v] -= aumento;
      r[v * n + u] += aumento;
    }
    flujo += aumento;
  }
}
