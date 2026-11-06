#ifndef EJERCICIO_TRIE_PREF_16_H
#define EJERCICIO_TRIE_PREF_16_H
#include "trie-pref-common.h"
typedef struct {size_t nodos,bytes,aristas,ranuras;double ocupacion;} trie_memoria_t;
nodo_trie_t *trie_crear(void);
bool trie_insertar(nodo_trie_t *,const char *);
void trie_medir(const nodo_trie_t *,trie_memoria_t *);
void trie_destruir(nodo_trie_t *);
#endif /* EJERCICIO_TRIE_PREF_16_H */
