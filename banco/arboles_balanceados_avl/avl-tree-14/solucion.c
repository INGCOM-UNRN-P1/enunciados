#include "avl-tree-14.h"
static void sum14(const avl_node_t *n, long *sum, size_t *count) {
  if (!n)
    return;
  *sum += avl_balance(n);
  ++*count;
  sum14(n->left, sum, count);
  sum14(n->right, sum, count);
}
double ejecutar_avl_tree_14(const avl_node_t *r) {
  long s = 0;
  size_t n = 0;
  sum14(r, &s, &n);
  return n ? (double)s / n : 0.0;
}
