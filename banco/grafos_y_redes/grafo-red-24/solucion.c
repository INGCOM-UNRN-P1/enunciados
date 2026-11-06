#include "grafo-red-24.h"
#include <stddef.h>
static int ham_dfs(size_t n, const unsigned char *a, size_t u,
                   unsigned char *seen, size_t k) {
  if (k == n)
    return 1;
  for (size_t v = 0; v < n; v++)
    if (a[u * n + v] && !seen[v]) {
      seen[v] = 1;
      if (ham_dfs(n, a, v, seen, k + 1))
        return 1;
      seen[v] = 0;
    }
  return 0;
}
/* Fuerza bruta con backtracking; decide si existe camino Hamiltoniano. */
int camino_hamiltoniano(size_t n, const unsigned char *a) {
  if (!n || n > 20 || !a)
    return -1;
  unsigned char s[20] = {0};
  for (size_t i = 0; i < n; i++) {
    s[i] = 1;
    if (ham_dfs(n, a, i, s, 1))
      return 1;
    s[i] = 0;
  }
  return 0;
}
