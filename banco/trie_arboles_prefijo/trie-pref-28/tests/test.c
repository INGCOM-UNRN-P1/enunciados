#include "../trie-pref-28.h"
#include <assert.h>
int main(void){
 nodo_trie_t *r=tp_nuevo();assert(r&&trie_es_integra(r));
 assert(tp_insertar(r,"casa")&&tp_insertar(r,"dado"));assert(trie_es_integra(r));
 r->hijos[1].byte='a';assert(!trie_es_integra(r));r->hijos[1].byte='d';
 nodo_trie_t *orig=r->hijos[1].nodo->hijos[0].nodo;
 r->hijos[1].nodo->hijos[0].nodo=r->hijos[0].nodo->hijos[0].nodo;assert(!trie_es_integra(r));
 r->hijos[1].nodo->hijos[0].nodo=orig;tp_destruir(r);
 nodo_trie_t bad={0,1,0,NULL};assert(!trie_es_integra(&bad));assert(!trie_es_integra(NULL));return 0;
}
