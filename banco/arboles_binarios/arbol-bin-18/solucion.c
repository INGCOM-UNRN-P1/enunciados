#include "arbol-bin-18.h"
#include <stdlib.h>
static void liberar(nodo_arbol_18_t*n){if(n){liberar(n->izq);liberar(n->der);free(n);}}
static nodo_arbol_18_t *rec(const int*in,const int*pre,size_t n){if(!n)return NULL;size_t k=0;while(k<n&&in[k]!=pre[0])k++;if(k==n)return NULL;nodo_arbol_18_t*r=malloc(sizeof(*r));if(!r)return NULL;r->valor=pre[0];r->izq=rec(in,pre+1,k);if(k&& !r->izq){free(r);return NULL;}r->der=rec(in+k+1,pre+k+1,n-k-1);if(n-k-1&&!r->der){liberar(r->izq);free(r);return NULL;}return r;}
nodo_arbol_18_t *reconstruir_in_pre(const int*in,const int*pre,size_t n){if(!n)return NULL;if(!in||!pre)return NULL;return rec(in,pre,n);}
void liberar_arbol_18(nodo_arbol_18_t*n){liberar(n);}
