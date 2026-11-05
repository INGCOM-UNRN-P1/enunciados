#ifndef EJERCICIO_AVL_TREE_23_H
#define EJERCICIO_AVL_TREE_23_H
#include "../avl_tree_common.h"
#include <stddef.h>
#include <stdio.h>
typedef struct { int *values; size_t *indices; size_t count; } avl_index_t;
int avl_heap_child_index(size_t parent, int right_child, size_t *child);
int avl_index_build(const avl_node_t *root, avl_index_t *index);
void avl_index_destroy(avl_index_t *index);
#endif
