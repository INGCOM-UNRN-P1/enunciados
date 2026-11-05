#include "arbol-bin-08.h"
static int altura(const nodo_arbol_08_t *n){ if(!n)return 0; int a=altura(n->izq),b=altura(n->der); return 1+(a>b?a:b); }
static bool perfecto(const nodo_arbol_08_t *n,int nivel,int hojas){ if(!n)return true; if(!n->izq&&!n->der)return nivel==hojas; if(!n->izq||!n->der)return false; return perfecto(n->izq,nivel+1,hojas)&&perfecto(n->der,nivel+1,hojas); }
bool es_perfecto(const nodo_arbol_08_t *n){ if(!n)return true; return perfecto(n,1,altura(n)); }
