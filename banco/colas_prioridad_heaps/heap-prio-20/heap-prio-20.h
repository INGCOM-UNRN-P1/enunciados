#ifndef EJERCICIO_HEAP_PRIO_20_H
#define EJERCICIO_HEAP_PRIO_20_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct huffman_node {uint64_t frequency;size_t symbol;struct huffman_node *left,*right;} huffman_node_t;
bool huffman_build(const uint64_t *frequencies,size_t n,huffman_node_t **root);
bool huffman_code(const huffman_node_t *root,size_t symbol,char *out,size_t cap,size_t *needed);
void huffman_destroy(huffman_node_t *root);
#endif
