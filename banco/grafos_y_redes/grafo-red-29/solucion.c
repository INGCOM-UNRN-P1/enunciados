#include "grafo-red-29.h"
#include <stddef.h>
/* Warshall: matriz booleana n*n actualizada in-place; incorpora alcanzabilidad
 * reflexiva. */
int clausura_transitiva(size_t n, unsigned char *r) {
  if (!n || n > 512 || !r)
    return -1;
  for (size_t i = 0; i < n; i++)
    r[i * n + i] = 1;
  for (size_t k = 0; k < n; k++)
    for (size_t i = 0; i < n; i++)
      if (r[i * n + k])
        for (size_t j = 0; j < n; j++)
          r[i * n + j] = (unsigned char)(r[i * n + j] || r[k * n + j]);
  return 0;
}
