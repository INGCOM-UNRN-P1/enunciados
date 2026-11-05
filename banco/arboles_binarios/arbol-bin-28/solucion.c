#include "arbol-bin-28.h"
size_t profundidad_minima_28(const nodo_arbol_bin_28_t*n){if(!n)return 0;if(!n->izq)return 1+profundidad_minima_28(n->der);if(!n->der)return 1+profundidad_minima_28(n->izq);size_t a=profundidad_minima_28(n->izq),b=profundidad_minima_28(n->der);return 1+(a<b?a:b);}
