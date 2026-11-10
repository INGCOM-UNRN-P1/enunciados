#include "trie-pref-28.h"
#include <stdint.h>
#include <stdlib.h>
typedef struct {const nodo_trie_t **slots;size_t cap,count;} set_t;
static size_t hash_ptr(const void *p){uintptr_t x=(uintptr_t)p;x^=x>>17;x*=((uintptr_t)0xed5ad4bbU);x^=x>>11;return (size_t)x;}
static bool crecer(set_t *s){size_t nc=s->cap?s->cap*2:64;if(nc<s->cap||nc>SIZE_MAX/sizeof(*s->slots))return false;const nodo_trie_t **v=calloc(nc,sizeof(*v));if(!v)return false;for(size_t i=0;i<s->cap;i++)if(s->slots[i]){size_t k=hash_ptr(s->slots[i])&(nc-1);while(v[k])k=(k+1)&(nc-1);v[k]=s->slots[i];}free(s->slots);s->slots=v;s->cap=nc;return true;}
static bool agregar(set_t *s,const nodo_trie_t *n){if(!s->cap||s->count*2>=s->cap)if(!crecer(s))return false;size_t k=hash_ptr(n)&(s->cap-1);while(s->slots[k]){if(s->slots[k]==n)return false;k=(k+1)&(s->cap-1);}s->slots[k]=n;s->count++;return true;}
static bool valida(const nodo_trie_t *n,set_t *s,size_t depth){if(!n||depth>4096||!agregar(s,n)||n->cantidad>n->capacidad||(n->cantidad&&!n->hijos)||(n->capacidad&&!n->hijos))return false;for(size_t i=0;i<n->cantidad;i++){if(!n->hijos[i].nodo||(i&&n->hijos[i-1].byte>=n->hijos[i].byte)||!valida(n->hijos[i].nodo,s,depth+1))return false;}return true;}
bool trie_es_integra(const nodo_trie_t *r){if(!r)return false;set_t s={0};bool ok=valida(r,&s,0);free(s.slots);return ok;}
