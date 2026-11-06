#include "trie-pref-06.h"
static size_t contar(const trie_nodo_t *n){if(!n)return 0;size_t c=n->terminal?1:0;for(size_t i=0;i<n->cantidad;i++){size_t x=contar(n->hijos[i].nodo);if(SIZE_MAX-c<x)return SIZE_MAX;c+=x;}return c;}
size_t trie_contar_prefijo(const trie_nodo_t *r,const char *p){trie_nodo_t *n=tp_buscar_nodo(r,p);return n?contar(n):0;}

nodo_trie_t *trie_crear(void){return tp_nuevo();}
bool trie_insertar(nodo_trie_t *r,const char *s){return tp_insertar(r,s);}
void trie_destruir(nodo_trie_t *r){tp_destruir(r);}
