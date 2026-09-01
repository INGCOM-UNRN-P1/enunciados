#ifndef EJERCICIO_TRIE_PREF_01_H
#define EJERCICIO_TRIE_PREF_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación trie_insertar */
void trie_insertar(t_NodoTrie *raiz, const char *palabra);
/* Operación trie_buscar_prefijo */
int trie_buscar_prefijo(const t_NodoTrie *raiz, const char *prefijo);
/* Operación liberar_trie */
void liberar_trie(t_NodoTrie *n);

#endif /* EJERCICIO_TRIE_PREF_01_H */
