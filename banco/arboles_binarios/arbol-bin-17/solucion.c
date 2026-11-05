#include "arbol-bin-17.h"
#include <stdlib.h>
static size_t profundidad(const nodo_arbol_17_t*n){if(!n)return 0;size_t a=profundidad(n->izq),b=profundidad(n->der);return 1+(a>b?a:b);}
static void imprimir(const nodo_arbol_17_t*n,FILE*f,int *camino,size_t nivel){if(!n)return;camino[nivel]=n->valor;if(!n->izq&&!n->der){for(size_t i=0;i<=nivel;i++)fprintf(f,"%s%d",i?" ":"",camino[i]);fputc('\n',f);return;}imprimir(n->izq,f,camino,nivel+1);imprimir(n->der,f,camino,nivel+1);}
void imprimir_caminos(const nodo_arbol_17_t*n,FILE*f){if(!f||!n)return;size_t d=profundidad(n);if(d>SIZE_MAX/sizeof(int))return;int *valores=malloc(d*sizeof(*valores));if(!valores)return;imprimir(n,f,valores,0);free(valores);}
