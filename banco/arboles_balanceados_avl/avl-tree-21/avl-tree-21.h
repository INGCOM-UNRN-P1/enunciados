#ifndef EJERCICIO_AVL_TREE_21_H
#define EJERCICIO_AVL_TREE_21_H
#include "../avl_tree_common.h"
#include <stddef.h>
#include <stdio.h>
size_t avl_serialize_level(const avl_node_t *root, int *values, size_t *indices, size_t capacity);
#endif
