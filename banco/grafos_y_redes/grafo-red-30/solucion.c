#include "grafo-red-30.h"
#include <limits.h>
#include <stddef.h>
/* Ruta mínima en malla rectangular con obstáculos (1 bloqueado); BFS, -1 sin
 * ruta. */
int ruta_malla(size_t filas, size_t cols, const unsigned char *b, size_t inicio,
               size_t destino, size_t *ruta, size_t capacidad, size_t *len) {
  if (!filas || !cols || filas > 128 || cols > 128 || !b || !ruta || !len ||
      inicio >= filas * cols || destino >= filas * cols || b[inicio] ||
      b[destino])
    return -1;
  int prev[16384];
  size_t q[16384], h = 0, t = 0;
  for (size_t i = 0; i < filas * cols; i++)
    prev[i] = -1;
  prev[inicio] = (int)inicio;
  q[t++] = inicio;
  while (h < t && prev[destino] < 0) {
    size_t u = q[h++], r = u / cols, c = u % cols, v[4], k = 0;
    if (r)
      v[k++] = u - cols;
    if (r + 1 < filas)
      v[k++] = u + cols;
    if (c)
      v[k++] = u - 1;
    if (c + 1 < cols)
      v[k++] = u + 1;
    for (size_t i = 0; i < k; i++)
      if (!b[v[i]] && prev[v[i]] < 0) {
        prev[v[i]] = (int)u;
        q[t++] = v[i];
      }
  }
  if (prev[destino] < 0)
    return 0;
  size_t rev[16384], n = 0;
  for (size_t u = destino;; u = (size_t)prev[u]) {
    rev[n++] = u;
    if (u == inicio)
      break;
  }
  if (capacidad < n)
    return -1;
  for (size_t i = 0; i < n; i++)
    ruta[i] = rev[n - 1 - i];
  *len = n;
  return 1;
}
