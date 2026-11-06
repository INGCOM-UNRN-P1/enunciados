#ifndef EJERCICIO_TRIE_PREF_17_H
#define EJERCICIO_TRIE_PREF_17_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "trie-pref-common.h"
void trie_dinamico_iniciar(trie_nodo_t *);
bool trie_dinamico_insertar(trie_nodo_t *,const char *);
bool trie_dinamico_buscar(const trie_nodo_t *,const char *);
void trie_dinamico_destruir(trie_nodo_t *);
#endif /* EJERCICIO_TRIE_PREF_17_H */
