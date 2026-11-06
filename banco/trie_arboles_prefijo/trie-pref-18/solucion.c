#include "trie-pref-18.h"
#include <stdlib.h>
#define HC 17u
static trie_hash_nodo_t *hn(void){trie_hash_nodo_t *n=calloc(1,sizeof *n);if(n){n->tabla=calloc(HC,sizeof(*n->tabla));if(!n->tabla){free(n);return NULL;}n->cubetas=HC;}return n;}
void trie_hash_iniciar(trie_hash_t *t){if(t)t->raiz=hn();}
static trie_hash_entrada_t *he(trie_hash_nodo_t *n,unsigned char c){for(trie_hash_entrada_t *e=n->tabla[c%HC];e;e=e->sig)if(e->byte==c)return e;return NULL;}
bool trie_hash_insertar(trie_hash_t *t,const char *s){if(!t||!s||!*s)return false;if(!t->raiz&&! (t->raiz=hn()))return false;trie_hash_nodo_t *n=t->raiz;for(const unsigned char *p=(const unsigned char*)s;*p;p++){trie_hash_entrada_t *e=he(n,*p);if(!e){e=calloc(1,sizeof *e);if(!e)return false;e->hijo=hn();if(!e->hijo){free(e);return false;}e->byte=*p;size_t b=*p%HC;e->sig=n->tabla[b];n->tabla[b]=e;}n=e->hijo;}n->terminal=true;return true;}
bool trie_hash_buscar(const trie_hash_t *t,const char *s){if(!t||!t->raiz||!s||!*s)return false;trie_hash_nodo_t *n=t->raiz;for(const unsigned char *p=(const unsigned char*)s;*p;p++){trie_hash_entrada_t *e=he(n,*p);if(!e)return false;n=e->hijo;}return n->terminal;}
static void hfree(trie_hash_nodo_t *n){if(!n)return;for(size_t i=0;i<n->cubetas;i++){trie_hash_entrada_t *e=n->tabla[i];while(e){trie_hash_entrada_t *q=e->sig;hfree(e->hijo);free(e);e=q;}}free(n->tabla);free(n);}
void trie_hash_destruir(trie_hash_t *t){if(t){hfree(t->raiz);t->raiz=NULL;}}
