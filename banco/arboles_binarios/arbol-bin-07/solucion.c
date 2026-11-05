#include "arbol-bin-07.h"
bool es_estricto(const nodo_arbol_07_t *n) { if(!n)return true; if ((n->izq==NULL)!=(n->der==NULL)) return false; return es_estricto(n->izq)&&es_estricto(n->der); }
