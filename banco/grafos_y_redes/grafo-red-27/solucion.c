#include "grafo-red-27.h"
#include <stddef.h>
/* Centralidad de grado en grafo dirigido: salida grados de salida y retorno
 * maximo. */
int centralidad_grado(size_t n, const unsigned char *a, size_t *grados) {
  if (!n || n > 256 || !a || !grados)
    return -1;
  size_t max = 0;
  for (size_t i = 0; i < n; i++) {
    grados[i] = 0;
    for (size_t j = 0; j < n; j++)
      grados[i] += a[i * n + j] != 0;
    if (grados[i] > max)
      max = grados[i];
  }
  return max > 2147483647u ? -1 : (int)max;
}
