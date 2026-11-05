#include "arbol-bin-30.h"
bool iterador_iniciar_30(iterador_30_t*i,const nodo_arbol_bin_30_t*r){if(!i)return false;i->tope=0;i->actual=r;return true;}
bool iterador_siguiente_30(iterador_30_t*i,int*v){if(!i||!v)return false;while(i->actual||i->tope){while(i->actual){if(i->tope==128)return false;i->pila[i->tope++]=i->actual;i->actual=i->actual->izq;}const nodo_arbol_bin_30_t*n=i->pila[--i->tope];*v=n->valor;i->actual=n->der;return true;}return false;}
