#include "trie-pref-16.h"
static void mem_rec(const trie_nodo_t *n,trie_memoria_t *m){if(!n)return;m->nodos++;m->bytes+=sizeof(*n)+n->capacidad*sizeof(*n->hijos);m->aristas+=n->cantidad;m->ranuras+=n->capacidad;for(size_t i=0;i<n->cantidad;i++)mem_rec(n->hijos[i].nodo,m);}
void trie_medir(const trie_nodo_t *r,trie_memoria_t *m){if(!m)return;memset(m,0,sizeof *m);mem_rec(r,m);if(m->nodos)m->ocupacion=(double)m->aristas/((double)m->nodos*256.0);}

nodo_trie_t *trie_crear(void){return tp_nuevo();}
bool trie_insertar(nodo_trie_t *r,const char *s){return tp_insertar(r,s);}
void trie_destruir(nodo_trie_t *r){tp_destruir(r);}
