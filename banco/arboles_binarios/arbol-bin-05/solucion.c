#include "arbol-bin-05.h"
int64_t sumar_nodos(const nodo_arbol_05_t *n) { return n ? (int64_t)n->valor + sumar_nodos(n->izq) + sumar_nodos(n->der) : 0; }
