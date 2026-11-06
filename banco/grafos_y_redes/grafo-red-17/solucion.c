#include "grafo-red-17.h"
/* Bellman-Ford: distancia desde el origen y detección de ciclos negativos. */
#include <limits.h>
#include <stddef.h>

int bellman_ford_ciclo_negativo(size_t n, const arista_t *aristas, size_t m,
                                size_t origen, long long *dist) {
  if (n == 0 || n > 1000000 || origen >= n || dist == NULL ||
      (m != 0 && aristas == NULL))
    return -1;
  const long long inf = LLONG_MAX / 4;
  for (size_t i = 0; i < n; ++i)
    dist[i] = inf;
  dist[origen] = 0;
  for (size_t k = 1; k < n; ++k) {
    int cambio = 0;
    for (size_t j = 0; j < m; ++j) {
      arista_t e = aristas[j];
      if (e.desde >= n || e.hasta >= n)
        return -1;
      if (dist[e.desde] != inf && dist[e.desde] + e.peso < dist[e.hasta]) {
        dist[e.hasta] = dist[e.desde] + e.peso;
        cambio = 1;
      }
    }
    if (!cambio)
      break;
  }
  for (size_t j = 0; j < m; ++j) {
    arista_t e = aristas[j];
    if (e.desde >= n || e.hasta >= n)
      return -1;
    if (dist[e.desde] != inf && dist[e.desde] + e.peso < dist[e.hasta])
      return 1;
  }
  return 0;
}
