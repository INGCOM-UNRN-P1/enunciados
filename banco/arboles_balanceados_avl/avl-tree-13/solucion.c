#include "avl-tree-13.h"
size_t ejecutar_avl_tree_13(const avl_node_t *r, int lo, int hi) {
  if (!r || lo > hi)
    return 0;
  return (r->key >= lo && r->key <= hi) +
         ejecutar_avl_tree_13(r->left, lo, hi) +
         ejecutar_avl_tree_13(r->right, lo, hi);
}
