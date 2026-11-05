#include "avl-tree-20.h"
static size_t sz(const avl_node_t *n) {
  return n ? 1 + sz(n->left) + sz(n->right) : 0;
}
int avl_kth_smallest(const avl_node_t *n, size_t k, int *out) {
  if (!n || !out || !k || k > sz(n))
    return 0;
  size_t l = sz(n->left);
  if (k == l + 1) {
    *out = n->key;
    return 1;
  }
  return k <= l ? avl_kth_smallest(n->left, k, out)
                : avl_kth_smallest(n->right, k - l - 1, out);
}
