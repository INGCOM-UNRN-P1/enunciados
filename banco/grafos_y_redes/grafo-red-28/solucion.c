#include "grafo-red-28.h"
#include <limits.h>
#include <stddef.h>
/* BFS desde cada vértice; requiere grafo conexo; escribe excentricidades,
 * retorna diámetro. */
int diametro_radio(size_t n, const unsigned char *a, int *ecc, int *radio) {
  if (!n || n > 256 || !a || !ecc || !radio)
    return -1;
  int mx = 0, mn = INT_MAX;
  for (size_t s = 0; s < n; s++) {
    int d[256];
    size_t q[256], h = 0, t = 0;
    for (size_t i = 0; i < n; i++)
      d[i] = -1;
    d[s] = 0;
    q[t++] = s;
    while (h < t) {
      size_t u = q[h++];
      for (size_t v = 0; v < n; v++)
        if (a[u * n + v] && d[v] < 0) {
          d[v] = d[u] + 1;
          q[t++] = v;
        }
    }
    for (size_t i = 0; i < n; i++)
      if (d[i] < 0)
        return -1;
    ecc[s] = d[s];
    for (size_t i = 0; i < n; i++)
      if (d[i] > ecc[s])
        ecc[s] = d[i];
    if (ecc[s] > mx)
      mx = ecc[s];
    if (ecc[s] < mn)
      mn = ecc[s];
  }
  *radio = mn;
  return mx;
}
