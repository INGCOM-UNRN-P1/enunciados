#ifndef EJERCICIO_HEAP_PRIO_18_H
#define EJERCICIO_HEAP_PRIO_18_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct leftist_node { int key; unsigned rank; struct leftist_node *left,*right; } leftist_node_t;
typedef struct { leftist_node_t *root; } leftist_heap_t;
void leftist_heap_init(leftist_heap_t *h);
bool leftist_heap_insert(leftist_heap_t *h,int key);
bool leftist_heap_peek(const leftist_heap_t *h,int *out);
bool leftist_heap_pop(leftist_heap_t *h,int *out);
bool leftist_heap_meld(leftist_heap_t *a,leftist_heap_t *b);
void leftist_heap_destroy(leftist_heap_t *h);
#endif
