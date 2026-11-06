#include "trie-pref-15.h"
static void stats_rec(const trie_nodo_t *n,trie_estadisticas_t *s){if(!n)return;s->nodos++;if(n->terminal)s->palabras++;if(!n->cantidad)s->hojas++;s->aristas+=n->cantidad;for(size_t i=0;i<n->cantidad;i++)stats_rec(n->hijos[i].nodo,s);}
void trie_estadisticas(const trie_nodo_t *r,trie_estadisticas_t *s){if(!s)return;memset(s,0,sizeof *s);stats_rec(r,s);}

nodo_trie_t *trie_crear(void){return tp_nuevo();}
bool trie_insertar(nodo_trie_t *r,const char *s){return tp_insertar(r,s);}
void trie_destruir(nodo_trie_t *r){tp_destruir(r);}
