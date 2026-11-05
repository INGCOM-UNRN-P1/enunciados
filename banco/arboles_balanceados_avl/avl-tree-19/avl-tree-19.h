#ifndef EJERCICIO_AVL_TREE_19_H
#define EJERCICIO_AVL_TREE_19_H
#include "../avl_tree_common.h"
#include <stddef.h>
#include <stdio.h>
size_t avl_subtree_size(const avl_node_t *root);
int avl_select_rank(const avl_node_t *root, size_t rank, int *key);
#endif
