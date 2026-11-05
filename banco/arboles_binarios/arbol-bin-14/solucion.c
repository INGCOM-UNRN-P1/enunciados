#include "arbol-bin-14.h"
bool son_identicos(const nodo_arbol_14_t*a,const nodo_arbol_14_t*b){if(!a||!b)return a==b;return a->valor==b->valor&&son_identicos(a->izq,b->izq)&&son_identicos(a->der,b->der);}
