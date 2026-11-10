#ifndef EJERCICIO_TRIE_PREF_26_H
#define EJERCICIO_TRIE_PREF_26_H
#include <stddef.h>
#include <stdbool.h>
typedef struct trie_texto_nodo trie_texto_nodo_t;
typedef struct {trie_texto_nodo_t *raiz;} trie_texto_indice_t;
bool trie_texto_indexar(trie_texto_indice_t *,const char *texto);
size_t trie_texto_buscar(const trie_texto_indice_t *,const char *palabra,size_t *posiciones,size_t capacidad);
void trie_texto_destruir(trie_texto_indice_t *);
#endif
