#include "arbol-bin-09.h"
static int altura_balanceada(const nodo_arbol_09_t *n){ if(!n)return 0; int a=altura_balanceada(n->izq); if(a<0)return -1; int b=altura_balanceada(n->der); if(b<0||a-b>1||b-a>1)return -1; return 1+(a>b?a:b); }
bool esta_balanceado(const nodo_arbol_09_t *n){ return altura_balanceada(n)>=0; }
