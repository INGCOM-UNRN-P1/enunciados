#ifndef EJERCICIO_TRIE_PREF_20_H
#define EJERCICIO_TRIE_PREF_20_H
#include "trie-pref-common.h"
#include <stdio.h>
nodo_trie_t *trie_cargar_diccionario(FILE *);
bool trie_buscar(const nodo_trie_t *,const char *);
void trie_destruir(nodo_trie_t *);
#endif /* EJERCICIO_TRIE_PREF_20_H */
