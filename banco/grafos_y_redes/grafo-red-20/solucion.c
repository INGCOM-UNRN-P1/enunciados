#include "grafo-red-20.h"
#include <limits.h>
#include <stddef.h>
static size_t raiz(size_t *p, size_t x) {
  while (p[x] != x) {
    p[x] = p[p[x]];
    x = p[x];
  }
  return x;
}
/* Kruskal sortea aristas in-place y devuelve peso; selected[0..count) guarda el
 * árbol. */
int kruskal_mst(size_t n, arista_kruskal_t *e, size_t m,
                arista_kruskal_t *selected, size_t cap, size_t *count) {
  if (!n || n > 256 || (m && !e) || !selected || !count || cap < n - 1)
    return -1;
  size_t p[256];
  for (size_t i = 0; i < n; i++)
    p[i] = i;
  for (size_t i = 0; i < m; i++) {
    if (e[i].u >= n || e[i].v >= n || e[i].peso < 0)
      return -1;
    for (size_t j = i + 1; j < m; j++)
      if (e[j].peso < e[i].peso) {
        arista_kruskal_t t = e[i];
        e[i] = e[j];
        e[j] = t;
      }
  }
  long long total = 0;
  size_t k = 0;
  for (size_t i = 0; i < m && k < n - 1; i++) {
    size_t a = raiz(p, e[i].u), b = raiz(p, e[i].v);
    if (a != b) {
      p[a] = b;
      selected[k++] = e[i];
      total += e[i].peso;
    }
  }
  *count = k;
  return k == n - 1 && total <= INT_MAX ? (int)total : -1;
}
