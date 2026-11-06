#include "trie-pref-11.h"
#include <stdlib.h>
void ip_trie_iniciar(ip_trie_t *t){if(t)t->raiz=calloc(1,sizeof(ip_nodo_t));}
bool ip_trie_insertar(ip_trie_t *t,uint32_t a,unsigned p,int v){if(!t||p>32)return false;if(!t->raiz){t->raiz=calloc(1,sizeof(ip_nodo_t));if(!t->raiz)return false;}ip_nodo_t *n=t->raiz;for(unsigned i=0;i<p;i++){unsigned b=(a>>(31-i))&1u;if(!n->hijo[b]){n->hijo[b]=calloc(1,sizeof(ip_nodo_t));if(!n->hijo[b])return false;}n=n->hijo[b];}n->valor=v;n->tiene_valor=true;return true;}
bool ip_trie_buscar(const ip_trie_t *t,uint32_t a,int *v){if(!t||!t->raiz||!v)return false;const ip_nodo_t *n=t->raiz;bool found=n->tiene_valor;int best=n->valor;for(unsigned i=0;i<32;i++){n=n->hijo[(a>>(31-i))&1u];if(!n)break;if(n->tiene_valor){best=n->valor;found=true;}}if(found)*v=best;return found;}
static void ipfree(ip_nodo_t *n){if(n){ipfree(n->hijo[0]);ipfree(n->hijo[1]);free(n);}}
void ip_trie_destruir(ip_trie_t *t){if(t){ipfree(t->raiz);t->raiz=NULL;}}
