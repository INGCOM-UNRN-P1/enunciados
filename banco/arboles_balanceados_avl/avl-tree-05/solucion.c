#include "avl-tree-05.h"
avl_node_t *ejecutar_avl_tree_05(avl_node_t *r) {
  if (!r || !r->right)
    return r;
  r->right = avl_rotate_right(r->right);
  return avl_rotate_left(r);
}
