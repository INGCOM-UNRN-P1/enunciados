#include "grafo-red-21.h"
#include <stddef.h>
#include <string.h>
/* Tarjan DFS; los arreglos de salida deben tener n posiciones; retorna bridges
 * count. */
static void dfs_art(size_t n, const unsigned char *a, size_t u, size_t parent,
                    size_t *tm, size_t *disc, size_t *low, unsigned char *art,
                    unsigned char *br) {
  disc[u] = low[u] = ++*tm;
  size_t children = 0;
  for (size_t v = 0; v < n; v++)
    if (a[u * n + v]) {
      if (!disc[v]) {
        children++;
        dfs_art(n, a, v, u, tm, disc, low, art, br);
        if (low[v] < low[u])
          low[u] = low[v];
        if (parent != n && low[v] >= disc[u])
          art[u] = 1;
        if (low[v] > disc[u])
          br[u * n + v] = br[v * n + u] = 1;
      } else if (v != parent && disc[v] < low[u])
        low[u] = disc[v];
    }
  if (parent == n && children > 1)
    art[u] = 1;
}
int puentes_articulaciones(size_t n, const unsigned char *a, unsigned char *art,
                           unsigned char *br) {
  if (!n || n > 256 || !a || !art || !br)
    return -1;
  size_t d[256] = {0}, l[256], t = 0;
  memset(art, 0, n);
  memset(br, 0, n * n);
  for (size_t i = 0; i < n; i++)
    if (!d[i])
      dfs_art(n, a, i, n, &t, d, l, art, br);
  int c = 0;
  for (size_t i = 0; i < n; i++)
    for (size_t j = i + 1; j < n; j++)
      c += br[i * n + j] != 0;
  return c;
}
