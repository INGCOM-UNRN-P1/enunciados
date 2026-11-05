#include "arbol-bin-10.h"
static size_t diam(const nodo_arbol_10_t *n,size_t *mejor){ if(!n)return 0; size_t a=diam(n->izq,mejor),b=diam(n->der,mejor); if(a+b>*mejor)*mejor=a+b; return 1+(a>b?a:b); }
size_t diametro(const nodo_arbol_10_t *n){ size_t m=0; diam(n,&m); return m; }
