#include "avl-tree-01.h"
static int altura01(const avl_node_t *n) {
  if (!n)
    return 0;
  return 1 + avl_max(altura01(n->left), altura01(n->right));
}
int ejecutar_avl_tree_01(const avl_node_t *n, int *h, int *fb) {
  if (!h || !fb)
    return 0;
  *h = altura01(n);
  *fb = n ? altura01(n->left) - altura01(n->right) : 0;
  return 1;
}
