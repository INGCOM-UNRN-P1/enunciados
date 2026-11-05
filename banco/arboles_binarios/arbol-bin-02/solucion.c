#include "arbol-bin-02.h"
#include <stdlib.h>
static int maximo(int a, int b) { return a > b ? a : b; }
int altura_arbol(const nodo_arbol_t *n) {
  return n ? 1 + maximo(altura_arbol(n->izq), altura_arbol(n->der)) : 0;
}
int contar_hojas(const nodo_arbol_t *n) {
  if (!n)
    return 0;
  if (!n->izq && !n->der)
    return 1;
  return contar_hojas(n->izq) + contar_hojas(n->der);
}
void liberar_arbol(nodo_arbol_t *n) {
  if (n) {
    liberar_arbol(n->izq);
    liberar_arbol(n->der);
    free(n);
  }
}
