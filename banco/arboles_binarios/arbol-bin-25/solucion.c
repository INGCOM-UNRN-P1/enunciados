#include "arbol-bin-25.h"
size_t contar_un_hijo_25(const nodo_arbol_bin_25_t*n){return n?((n->izq==NULL)!=(n->der==NULL))+contar_un_hijo_25(n->izq)+contar_un_hijo_25(n->der):0;}
