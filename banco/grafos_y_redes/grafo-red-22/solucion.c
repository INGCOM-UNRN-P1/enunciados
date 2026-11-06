#include "grafo-red-22.h"
#include <stddef.h>
#include <string.h>
/* Undirected simple graph: connectivity over non-isolated vertices and all
 * degrees even. */
int grafo_euleriano(size_t n, const unsigned char *a) {
  if (!n || n > 256 || !a)
    return -1;
  size_t start = n;
  unsigned char seen[256] = {0};
  for (size_t i = 0; i < n; i++) {
    size_t deg = 0;
    for (size_t j = 0; j < n; j++)
      deg += a[i * n + j] != 0;
    if (deg & 1u)
      return 0;
    if (deg && start == n)
      start = i;
  }
  if (start == n)
    return 1;
  size_t q[256], h = 0, t = 0;
  q[t++] = start;
  seen[start] = 1;
  while (h < t) {
    size_t u = q[h++];
    for (size_t v = 0; v < n; v++)
      if (a[u * n + v] && !seen[v]) {
        seen[v] = 1;
        q[t++] = v;
      }
  }
  for (size_t i = 0; i < n; i++) {
    size_t d = 0;
    for (size_t j = 0; j < n; j++)
      d += a[i * n + j] != 0;
    if (d && !seen[i])
      return 0;
  }
  return 1;
}
