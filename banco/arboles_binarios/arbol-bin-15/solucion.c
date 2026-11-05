#include "arbol-bin-15.h"
static bool igual(const nodo_arbol_15_t*a,const nodo_arbol_15_t*b){if(!a||!b)return a==b;return a->valor==b->valor&&igual(a->izq,b->izq)&&igual(a->der,b->der);}
bool es_subarbol(const nodo_arbol_15_t*a,const nodo_arbol_15_t*b){if(!b)return true;if(!a)return false;return igual(a,b)||es_subarbol(a->izq,b)||es_subarbol(a->der,b);}
