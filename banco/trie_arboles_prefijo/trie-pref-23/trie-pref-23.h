#ifndef EJERCICIO_TRIE_PREF_23_H
#define EJERCICIO_TRIE_PREF_23_H
#include "../trie-pref-04/trie-pref-common.h"
#include <stdbool.h>
typedef struct { nodo_trie_t *raiz; } trie_sufijos_t;
bool trie_sufijos_crear(trie_sufijos_t *indice,const char *texto);
bool trie_sufijos_contiene(const trie_sufijos_t *indice,const char *subcadena);
void trie_sufijos_destruir(trie_sufijos_t *indice);
#endif
