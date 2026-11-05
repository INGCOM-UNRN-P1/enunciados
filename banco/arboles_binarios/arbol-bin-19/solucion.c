#include "arbol-bin-19.h"
#include <stdlib.h>
static void liberar(nodo_arbol_19_t*n){if(n){liberar(n->izq);liberar(n->der);free(n);}}
static nodo_arbol_19_t *rec(const int*in,const int*post,size_t n){if(!n)return NULL;int root=post[n-1];size_t k=0;while(k<n&&in[k]!=root)k++;if(k==n)return NULL;nodo_arbol_19_t*r=malloc(sizeof(*r));if(!r)return NULL;r->valor=root;r->izq=rec(in,post,k);if(k&&!r->izq){free(r);return NULL;}r->der=rec(in+k+1,post+k,n-k-1);if(n-k-1&&!r->der){liberar(r->izq);free(r);return NULL;}return r;}
nodo_arbol_19_t *reconstruir_in_post(const int*in,const int*post,size_t n){if(!n)return NULL;if(!in||!post)return NULL;return rec(in,post,n);}
void liberar_arbol_19(nodo_arbol_19_t*n){liberar(n);}
