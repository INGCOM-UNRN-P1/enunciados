#ifndef EJERCICIO_TRIE_PREF_02_H
#define EJERCICIO_TRIE_PREF_02_H
#include <stddef.h>
#define TRIE02_ALFABETO 36
typedef struct trie02_nodo_t { struct trie02_nodo_t *hijos[TRIE02_ALFABETO]; int fin; } trie02_nodo_t;
void trie02_insertar(trie02_nodo_t *raiz,const char *palabra);
int trie02_contiene(const trie02_nodo_t *raiz,const char *palabra);
void trie02_liberar(trie02_nodo_t *raiz);
#endif
