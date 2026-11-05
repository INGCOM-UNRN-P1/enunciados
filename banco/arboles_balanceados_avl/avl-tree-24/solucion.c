#include "avl-tree-24.h"
void avl_tree_destroy(avl_node_t **r) {
  if (r) {
    avl_destroy(*r);
    *r = NULL;
  }
}
