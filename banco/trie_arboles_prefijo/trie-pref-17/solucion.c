#include "trie-pref-17.h"
void trie_dinamico_iniciar(trie_nodo_t *t){if(t)memset(t,0,sizeof *t);}
bool trie_dinamico_insertar(trie_nodo_t *t,const char *s){return s&&tp_insertar(t,s);}
bool trie_dinamico_buscar(const trie_nodo_t *t,const char *s){return s&&tp_buscar(t,s);}
void trie_dinamico_destruir(trie_nodo_t *t){if(t){for(size_t i=0;i<t->cantidad;i++)tp_destruir(t->hijos[i].nodo);free(t->hijos);memset(t,0,sizeof *t);}}
