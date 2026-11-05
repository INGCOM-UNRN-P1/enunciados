#include "avl-tree-10.h"
static size_t inorder10(const avl_node_t *n, int *a, size_t cap, size_t i) {
  if (!n || i >= cap)
    return i;
  i = inorder10(n->left, a, cap, i);
  if (i < cap)
    a[i++] = n->key;
  return inorder10(n->right, a, cap, i);
}
size_t ejecutar_avl_tree_10(const avl_node_t *r, int *a, size_t c) {
  return a ? inorder10(r, a, c, 0) : 0;
}
