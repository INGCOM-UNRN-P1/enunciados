#ifndef EJERCICIO_TRIE_PREF_04_H
#define EJERCICIO_TRIE_PREF_04_H
#include "trie-pref-common.h"
bool trie_insertar(nodo_trie_t *,const char *);
bool trie_buscar(const nodo_trie_t *,const char *);
bool trie_eliminar(nodo_trie_t *,const char *);
void trie_destruir(nodo_trie_t *);
#endif /* EJERCICIO_TRIE_PREF_04_H */
