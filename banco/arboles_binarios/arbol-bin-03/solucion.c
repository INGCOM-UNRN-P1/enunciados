#include "arbol-bin-03.h"
#include <stdlib.h>
size_t recorrido_niveles(const nodo_arbol_t *raiz, int *salida,
                         size_t capacidad) {
  if (!raiz)
    return 0;
  if (!salida || capacidad == 0)
    return 0;
  if (capacidad > (size_t)-1 / sizeof(const nodo_arbol_t *) ||
      capacidad > (size_t)-1 / sizeof(int))
    return 0;
  const nodo_arbol_t **q = malloc(capacidad * sizeof(*q));
  if (!q)
    return 0;
  int *tmp = malloc(capacidad * sizeof(*tmp));
  if (!tmp) {
    free(q);
    return 0;
  }
  size_t ini = 0, fin = 0;
  q[fin++] = raiz;
  while (ini < fin) {
    const nodo_arbol_t *n = q[ini++];
    tmp[ini - 1] = n->valor;
    if (n->izq) {
      if (fin == capacidad) {
        free(tmp);
        free(q);
        return 0;
      }
      q[fin++] = n->izq;
    }
    if (n->der) {
      if (fin == capacidad) {
        free(tmp);
        free(q);
        return 0;
      }
      q[fin++] = n->der;
    }
  }
  for (size_t i = 0; i < ini; i++)
    salida[i] = tmp[i];
  free(tmp);
  free(q);
  return ini;
}
