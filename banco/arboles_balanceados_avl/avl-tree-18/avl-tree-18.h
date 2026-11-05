#ifndef EJERCICIO_AVL_TREE_18_H
#define EJERCICIO_AVL_TREE_18_H
#include "../avl_tree_common.h"
#include <stddef.h>
#include <stdio.h>
void avl_split(const avl_node_t *root, int pivot, avl_node_t **less, avl_node_t **greater_equal);
#endif
