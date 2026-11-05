#include "arbol-bin-04.h"
size_t contar_nodos(const nodo_arbol_04_t *n) { return n ? 1 + contar_nodos(n->izq) + contar_nodos(n->der) : 0; }
