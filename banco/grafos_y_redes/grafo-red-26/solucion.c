#include "grafo-red-26.h"
#include <limits.h>
#include <stddef.h>
/* Edmonds-Karp BFS; previene overflow tanto de flujo como de residual inverso.
 */
int edmonds_karp(size_t n, int *r, size_t s, size_t t) {
  if (n < 2 || n > 256 || !r || s >= n || t >= n || s == t)
    return -1;
  for (size_t i = 0; i < n * n; i++)
    if (r[i] < 0)
      return -1;
  int total = 0, par[256];
  size_t q[256];
  for (;;) {
    for (size_t i = 0; i < n; i++)
      par[i] = -1;
    size_t h = 0, z = 0;
    q[z++] = s;
    par[s] = (int)s;
    while (h < z && par[t] < 0) {
      size_t u = q[h++];
      for (size_t v = 0; v < n; v++)
        if (r[u * n + v] > 0 && par[v] < 0) {
          par[v] = (int)u;
          q[z++] = v;
        }
    }
    if (par[t] < 0)
      break;
    int f = INT_MAX;
    for (size_t v = t; v != s; v = (size_t)par[v])
      if (r[(size_t)par[v] * n + v] < f)
        f = r[(size_t)par[v] * n + v];
    if (f > INT_MAX - total)
      return -1;
    for (size_t v = t; v != s; v = (size_t)par[v]) {
      size_t u = (size_t)par[v];
      if (r[v * n + u] > INT_MAX - f)
        return -1;
    }
    total += f;
    for (size_t v = t; v != s; v = (size_t)par[v]) {
      size_t u = (size_t)par[v];
      r[u * n + v] -= f;
      r[v * n + u] += f;
    }
  }
  return total;
}
