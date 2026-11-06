#include "grafo-red-19.h"
#include <limits.h>
#include <stddef.h>
/* Prim: escribe n-1 aristas [u,v] en salida (capacidad 2*(n-1)); retorna peso
 * total. */
int prim_mst(size_t n, const int *w, size_t *salida, size_t capacidad) {
  if (!n || n > 256 || !w || !salida || capacidad < 2 * (n - 1))
    return -1;
  int usado[256] = {0};
  long long key[256];
  size_t padre[256];
  for (size_t i = 0; i < n; i++) {
    key[i] = LLONG_MAX;
    padre[i] = n;
  }
  key[0] = 0;
  long long total = 0;
  for (size_t it = 0; it < n; it++) {
    size_t u = n;
    for (size_t i = 0; i < n; i++)
      if (!usado[i] && (u == n || key[i] < key[u]))
        u = i;
    if (u == n || key[u] == LLONG_MAX)
      return -1;
    usado[u] = 1;
    total += key[u];
    for (size_t v = 0; v < n; v++) {
      int peso = w[u * n + v];
      if (v != u && peso >= 0 && !usado[v] && (long long)peso < key[v]) {
        key[v] = peso;
        padre[v] = u;
      }
    }
  }
  for (size_t v = 1; v < n; v++) {
    salida[2 * (v - 1)] = padre[v];
    salida[2 * (v - 1) + 1] = v;
  }
  return total > INT_MAX ? -1 : (int)total;
}
