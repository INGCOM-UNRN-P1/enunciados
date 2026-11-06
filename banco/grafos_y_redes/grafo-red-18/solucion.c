#include "grafo-red-18.h"
#include <limits.h>
#include <stddef.h>
/* Floyd-Warshall sobre matriz n*n: ausencia de arco = inf; -1 si argumentos
 * inválidos. */
int floyd_warshall(size_t n, long long *d) {
  if (n == 0 || n > 512 || d == NULL)
    return -1;
  const long long inf = LLONG_MAX / 4;
  for (size_t i = 0; i < n * n; ++i)
    if (d[i] > inf) return -1;
  for (size_t i = 0; i < n; i++)
    for (size_t j = 0; j < n; j++)
      if (i == j && d[i * n + j] > 0)
        d[i * n + j] = 0;
  for (size_t i = 0; i < n; ++i)
    if (d[i * n + i] < 0)
      return 1;
  for (size_t k = 0; k < n; k++) {
    for (size_t i = 0; i < n; i++)
      for (size_t j = 0; j < n; j++)
        if (d[i * n + k] != inf && d[k * n + j] != inf) {
          long long a = d[i * n + k], b = d[k * n + j];
          if ((b > 0 && a > LLONG_MAX - b) || (b < 0 && a < LLONG_MIN - b))
            return -2;
          long long candidato = a + b;
          if (candidato >= inf && d[i * n + j] == inf)
            return -2;
          if (candidato < d[i * n + j]) {
            d[i * n + j] = candidato;
            if (i == j && candidato < 0)
              return 1;
          }
        }
    for (size_t i = 0; i < n; ++i)
      if (d[i * n + i] < 0)
        return 1;
  }
  return 0;
}
