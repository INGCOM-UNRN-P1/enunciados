#include "arbol-bin-11.h"
static bool contiene(const nodo_arbol_11_t*n,int v){return n&&(n->valor==v||contiene(n->izq,v)||contiene(n->der,v));}
static nodo_arbol_11_t *lca(const nodo_arbol_11_t*n,int a,int b){if(!n||n->valor==a||n->valor==b)return (nodo_arbol_11_t*)n; nodo_arbol_11_t*x=lca(n->izq,a,b),*y=lca(n->der,a,b); return x&&y?(nodo_arbol_11_t*)n:(x?x:y);}
nodo_arbol_11_t *ancestro_comun(const nodo_arbol_11_t*n,int a,int b){if(!contiene(n,a)||!contiene(n,b))return NULL;if(a==b){if(!n)return NULL;if(n->valor==a)return (nodo_arbol_11_t*)n;nodo_arbol_11_t*x=ancestro_comun(n->izq,a,b);return x?x:ancestro_comun(n->der,a,b);}return lca(n,a,b);}
