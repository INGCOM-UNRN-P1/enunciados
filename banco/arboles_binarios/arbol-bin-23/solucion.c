#include "arbol-bin-23.h"
long long suma_nivel_23(const nodo_arbol_bin_23_t*n,size_t k){return !n?0:k?suma_nivel_23(n->izq,k-1)+suma_nivel_23(n->der,k-1):n->valor;}
