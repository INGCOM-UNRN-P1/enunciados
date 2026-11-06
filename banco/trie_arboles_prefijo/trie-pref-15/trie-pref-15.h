#ifndef EJERCICIO_TRIE_PREF_15_H
#define EJERCICIO_TRIE_PREF_15_H
#include "trie-pref-common.h"
typedef struct {size_t nodos,hojas,palabras,aristas;} trie_estadisticas_t;
nodo_trie_t *trie_crear(void);
bool trie_insertar(nodo_trie_t *,const char *);
void trie_estadisticas(const nodo_trie_t *,trie_estadisticas_t *);
void trie_destruir(nodo_trie_t *);
#endif /* EJERCICIO_TRIE_PREF_15_H */
