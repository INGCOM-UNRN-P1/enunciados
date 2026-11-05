#include "avl-tree-25.h"
static avl_node_t *bst_insert(avl_node_t *n, int k) {
  if (!n)
    return avl_new(k);
  if (k < n->key)
    n->left = bst_insert(n->left, k);
  else if (k > n->key)
    n->right = bst_insert(n->right, k);
  return n;
}
static int bh(const avl_node_t *n) {
  return n ? 1 + avl_max(bh(n->left), bh(n->right)) : 0;
}
int avl_compare_heights(const int *a, size_t n, int *ah, int *sh) {
  if ((n && !a) || !ah || !sh)
    return 0;
  avl_node_t *avl = NULL, *bst = NULL;
  for (size_t i = 0; i < n; i++) {
    avl = avl_insert(avl, a[i]);
    bst = bst_insert(bst, a[i]);
  }
  *ah = avl_height(avl);
  *sh = bh(bst);
  avl_destroy(avl);
  avl_destroy(bst);
  return 1;
}
