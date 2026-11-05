#include "arbol-bin-26.h"
#include <stdlib.h>
nodo_arbol_bin_26_t *podar_hojas_26(nodo_arbol_bin_26_t*n,int v){if(!n)return NULL;n->izq=podar_hojas_26(n->izq,v);n->der=podar_hojas_26(n->der,v);if(!n->izq&&!n->der&&n->valor==v){free(n);return NULL;}return n;}
