#include "arbol-bin-12.h"
void invertir_arbol(nodo_arbol_12_t*n){if(!n)return; nodo_arbol_12_t*t=n->izq;n->izq=n->der;n->der=t;invertir_arbol(n->izq);invertir_arbol(n->der);}
