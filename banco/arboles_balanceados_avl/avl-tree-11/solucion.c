#include "avl-tree-11.h"
int ejecutar_avl_tree_11(const avl_node_t *r, int *mn, int *mx) {
  if (!r || !mn || !mx)
    return 0;
  const avl_node_t *a = r, *b = r;
  while (a->left)
    a = a->left;
  while (b->right)
    b = b->right;
  *mn = a->key;
  *mx = b->key;
  return 1;
}
