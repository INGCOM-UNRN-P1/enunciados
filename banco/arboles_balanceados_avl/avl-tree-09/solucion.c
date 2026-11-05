#include "avl-tree-09.h"
static int validar9(const avl_node_t *n, long lo, long hi, int *h) {
  if (!n) {
    *h = 0;
    return 1;
  }
  if (n->key <= lo || n->key >= hi)
    return 0;
  int l, r;
  if (!validar9(n->left, lo, n->key, &l) || !validar9(n->right, n->key, hi, &r))
    return 0;
  *h = 1 + avl_max(l, r);
  return l - r >= -1 && l - r <= 1;
}
int ejecutar_avl_tree_09(const avl_node_t *r) {
  int h;
  return validar9(r, -2147483649L, 2147483648L, &h);
}
