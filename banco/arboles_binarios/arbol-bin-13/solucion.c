#include "arbol-bin-13.h"
static bool espejo(const nodo_arbol_13_t*a,const nodo_arbol_13_t*b){if(!a||!b)return a==b;return a->valor==b->valor&&espejo(a->izq,b->der)&&espejo(a->der,b->izq);}
bool es_simetrico(const nodo_arbol_13_t*n){return !n||espejo(n->izq,n->der);}
