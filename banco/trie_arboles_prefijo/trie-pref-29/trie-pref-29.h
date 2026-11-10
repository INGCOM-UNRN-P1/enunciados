#ifndef EJERCICIO_TRIE_PREF_29_H
#define EJERCICIO_TRIE_PREF_29_H
#include <stddef.h>
#include <stdbool.h>
typedef struct {size_t trie_bytes;size_t hash_comparaciones;size_t bst_comparaciones;} trie_benchmark_t;
bool trie_comparar_estructuras(const char *const palabras[],size_t cantidad,trie_benchmark_t *resultado);
#endif
