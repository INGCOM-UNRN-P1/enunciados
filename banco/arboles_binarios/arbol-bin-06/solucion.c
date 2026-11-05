#include "arbol-bin-06.h"
bool obtener_min_max(const nodo_arbol_06_t *n, int *minimo, int *maximo) {
 if (!n || !minimo || !maximo) return false;
 int lo=n->valor, hi=n->valor, a,b;
 if (n->izq) { if (!obtener_min_max(n->izq,&a,&b)) return false; if(a<lo)lo=a; if(b>hi)hi=b; }
 if (n->der) { if (!obtener_min_max(n->der,&a,&b)) return false; if(a<lo)lo=a; if(b>hi)hi=b; }
 *minimo=lo; *maximo=hi; return true;
}
