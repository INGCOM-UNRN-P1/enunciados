#include "grafo-red-23.h"
#include <stddef.h>
#include <string.h>
/* Hierholzer para grafo simple no dirigido; circuito escrito en ruta, longitud
 * n_aristas+1. */
int hierholzer(size_t n, unsigned char *a, size_t *ruta, size_t capacidad,
               size_t *longitud) {
  if (!n || n > 128 || !a || !ruta || !longitud)
    return -1;
  size_t m = 0, start = n;
  int deg[128] = {0};
  for (size_t i = 0; i < n; i++)
    for (size_t j = i + 1; j < n; j++)
      if (a[i * n + j] || a[j * n + i]) {
        a[i * n + j] = a[j * n + i] = 1;
        deg[i]++;
        deg[j]++;
        m++;
      }
  for (size_t i = 0; i < n; i++)
    if (deg[i] & 1)
      return 0;
    else if (deg[i] && start == n)
      start = i;
  if (start == n) {
    if (capacidad < 1)
      return -1;
    ruta[0] = 0;
    *longitud = 1;
    return 1;
  }
  size_t st[8193], out[8193], top = 0, k = 0;
  st[top++] = start;
  while (top) {
    size_t u = st[top - 1], v = n;
    for (size_t x = 0; x < n; x++)
      if (a[u * n + x]) {
        v = x;
        break;
      }
    if (v < n) {
      a[u * n + v] = a[v * n + u] = 0;
      st[top++] = v;
    } else {
      out[k++] = st[top - 1];
      top--;
    }
  }
  if (k != m + 1)
    return 0;
  if (capacidad < k)
    return -1;
  for (size_t i = 0; i < k; i++)
    ruta[i] = out[k - 1 - i];
  *longitud = k;
  return 1;
}
