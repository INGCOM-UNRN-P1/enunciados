#include "avl-tree-07.h"
const avl_node_t *ejecutar_avl_tree_07(const avl_node_t *r, int k) {
  while (r) {
    if (k == r->key)
      return r;
    r = k < r->key ? r->left : r->right;
  }
  return NULL;
}
