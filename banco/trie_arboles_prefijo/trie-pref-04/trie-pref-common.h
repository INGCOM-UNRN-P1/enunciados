#ifndef TRIE_PREF_COMMON_H
#define TRIE_PREF_COMMON_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct trie_nodo trie_nodo_t;
typedef struct { unsigned char byte; trie_nodo_t *nodo; } trie_hijo_t;
struct trie_nodo { bool terminal; size_t cantidad, capacidad; trie_hijo_t *hijos; };
typedef trie_nodo_t nodo_trie_t;
static inline trie_nodo_t *tp_nuevo(void){ return calloc(1,sizeof(trie_nodo_t)); }
static inline size_t tp_pos(const trie_nodo_t *n,unsigned char b,bool *existe){size_t l=0,r=n?n->cantidad:0;while(l<r){size_t m=l+(r-l)/2;if(n->hijos[m].byte<b)l=m+1;else r=m;}*existe=n&&l<n->cantidad&&n->hijos[l].byte==b;return l;}
static inline trie_nodo_t *tp_hijo(const trie_nodo_t *n,unsigned char b){bool e;if(!n)return NULL;size_t p=tp_pos(n,b,&e);return e?n->hijos[p].nodo:NULL;}
static inline bool tp_agregar_hijo(trie_nodo_t *n,unsigned char b,trie_nodo_t *h){bool e;size_t p=tp_pos(n,b,&e);if(e)return false;if(n->cantidad==n->capacidad){size_t nc=n->capacidad?n->capacidad*2:4;if(nc<n->capacidad||nc>SIZE_MAX/sizeof(*n->hijos))return false;void *q=realloc(n->hijos,nc*sizeof(*n->hijos));if(!q)return false;n->hijos=q;n->capacidad=nc;}memmove(n->hijos+p+1,n->hijos+p,(n->cantidad-p)*sizeof(*n->hijos));n->hijos[p]=(trie_hijo_t){b,h};n->cantidad++;return true;}
static inline bool tp_insertar(trie_nodo_t *r,const char *s){if(!r||!s)return false;trie_nodo_t *n=r;for(const unsigned char *p=(const unsigned char*)s;*p;p++){trie_nodo_t *h=tp_hijo(n,*p);if(!h){h=tp_nuevo();if(!h)return false;if(!tp_agregar_hijo(n,*p,h)){free(h);return false;}}n=h;}n->terminal=true;return true;}
static inline trie_nodo_t *tp_buscar_nodo(const trie_nodo_t *r,const char *s){if(!r||!s)return NULL;const trie_nodo_t *n=r;for(const unsigned char *p=(const unsigned char*)s;*p;p++){n=tp_hijo(n,*p);if(!n)return NULL;}return (trie_nodo_t*)n;}
static inline bool tp_buscar(const trie_nodo_t *r,const char *s){trie_nodo_t *n=tp_buscar_nodo(r,s);return n&&n->terminal;}
static inline void tp_destruir(trie_nodo_t *n){if(!n)return;for(size_t i=0;i<n->cantidad;i++)tp_destruir(n->hijos[i].nodo);free(n->hijos);free(n);}
#endif
