#ifndef EJERCICIO_TRIE_PREF_19_H
#define EJERCICIO_TRIE_PREF_19_H
#include "trie-pref-common.h"
nodo_trie_t *trie_crear(void);
bool trie_insertar(nodo_trie_t *,const char *);
bool trie_buscar(const nodo_trie_t *,const char *);
bool trie_serializar(const nodo_trie_t *raiz,unsigned char **datos,size_t *longitud);
nodo_trie_t *trie_deserializar(const unsigned char *datos,size_t longitud);
#endif /* EJERCICIO_TRIE_PREF_19_H */
