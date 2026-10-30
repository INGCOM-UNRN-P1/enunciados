#ifndef EJERCICIO_TRIE_PREF_01_H
#define EJERCICIO_TRIE_PREF_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación trie_insertar */
void trie_insertar(nodo_trie_t *raiz, const char *palabra);
/* Operación trie_buscar_prefijo */
int trie_buscar_prefijo(const nodo_trie_t *raiz, const char *prefijo);
/* Operación liberar_trie */
void liberar_trie(nodo_trie_t *n);

#endif /* EJERCICIO_TRIE_PREF_01_H */
