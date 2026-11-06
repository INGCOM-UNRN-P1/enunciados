#ifndef EJERCICIO_TRIE_PREF_06_H
#define EJERCICIO_TRIE_PREF_06_H
#include "trie-pref-common.h"
nodo_trie_t *trie_crear(void);
bool trie_insertar(nodo_trie_t *,const char *);
size_t trie_contar_prefijo(const nodo_trie_t *,const char *);
void trie_destruir(nodo_trie_t *);
#endif /* EJERCICIO_TRIE_PREF_06_H */
