#ifndef EJERCICIO_TRIE_PREF_18_H
#define EJERCICIO_TRIE_PREF_18_H
#include <stdbool.h>
#include <stddef.h>
typedef struct trie_hash_nodo trie_hash_nodo_t;
typedef struct trie_hash_entrada {unsigned char byte;trie_hash_nodo_t *hijo;struct trie_hash_entrada *sig;} trie_hash_entrada_t;
struct trie_hash_nodo {bool terminal;size_t cubetas;trie_hash_entrada_t **tabla;};
typedef struct {trie_hash_nodo_t *raiz;} trie_hash_t;
void trie_hash_iniciar(trie_hash_t *t);
bool trie_hash_insertar(trie_hash_t *t,const char *palabra);
bool trie_hash_buscar(const trie_hash_t *t,const char *palabra);
void trie_hash_destruir(trie_hash_t *t);
#endif /* EJERCICIO_TRIE_PREF_18_H */
