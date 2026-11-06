#ifndef EJERCICIO_TRIE_PREF_01_H
#define EJERCICIO_TRIE_PREF_01_H
#include <stddef.h>
#define TRIE_ALFABETO 63
typedef struct nodo_trie { struct nodo_trie *hijos[TRIE_ALFABETO]; int es_fin_palabra; } nodo_trie_t;
void trie_insertar(nodo_trie_t *raiz, const char *palabra);
int trie_buscar_prefijo(const nodo_trie_t *raiz, const char *prefijo);
void liberar_trie(nodo_trie_t *n);
#endif
