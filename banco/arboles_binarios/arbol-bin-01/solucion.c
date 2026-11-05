#include "arbol-bin-01.h"
#include <stdlib.h>

void inorder(const nodo_arbol_t *n, FILE *out) {
  if (n != NULL && out != NULL) {
    inorder(n->izq, out);
    fprintf(out, "%d ", n->valor);
    inorder(n->der, out);
  }
}

void preorder(const nodo_arbol_t *n, FILE *out) {
  if (n != NULL && out != NULL) {
    fprintf(out, "%d ", n->valor);
    preorder(n->izq, out);
    preorder(n->der, out);
  }
}

void postorder(const nodo_arbol_t *n, FILE *out) {
  if (n != NULL && out != NULL) {
    postorder(n->izq, out);
    postorder(n->der, out);
    fprintf(out, "%d ", n->valor);
  }
}

void liberar_arbol(nodo_arbol_t *n) {
  if (n != NULL) {
    liberar_arbol(n->izq);
    liberar_arbol(n->der);
    free(n);
  }
}
