#include "avl-tree-04.h"
avl_node_t *ejecutar_avl_tree_04(avl_node_t *r) {
  if (!r || !r->left)
    return r;
  r->left = avl_rotate_left(r->left);
  return avl_rotate_right(r);
}
