#include "arbol-bin-20.h"
static nodo_arbol_bin_20_t *walk(nodo_arbol_bin_20_t*n,nodo_arbol_bin_20_t**p){if(!n)return NULL;nodo_arbol_bin_20_t*r=n->der;walk(n->izq,p);n->izq=*p;if(*p)(*p)->der=n;*p=n;walk(r,p);return n;}
nodo_arbol_bin_20_t *convertir_inorder_20(nodo_arbol_bin_20_t*r){nodo_arbol_bin_20_t*p=NULL;walk(r,&p);while(p&&p->izq)p=p->izq;return p;}
