#include "arbol-bin-16.h"
static int64_t maximo(int64_t a,int64_t b){return a>b?a:b;}
static int64_t camino(const nodo_arbol_16_t*n){if(!n->izq&&!n->der)return n->valor;if(!n->izq)return (int64_t)n->valor+camino(n->der);if(!n->der)return (int64_t)n->valor+camino(n->izq);return (int64_t)n->valor+maximo(camino(n->izq),camino(n->der));}
bool suma_maxima_raiz_hoja(const nodo_arbol_16_t*n,int64_t*s){if(!n||!s)return false;*s=camino(n);return true;}
