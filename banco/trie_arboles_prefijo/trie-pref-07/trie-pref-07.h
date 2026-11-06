#ifndef EJERCICIO_TRIE_PREF_07_H
#define EJERCICIO_TRIE_PREF_07_H
#include "trie-pref-common.h"
nodo_trie_t *trie_crear(void);
bool trie_insertar(nodo_trie_t *,const char *);
size_t trie_prefijo_mas_largo(const nodo_trie_t *,const char *,char *,size_t);
void trie_destruir(nodo_trie_t *);
#endif /* EJERCICIO_TRIE_PREF_07_H */
