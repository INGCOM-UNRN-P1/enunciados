#include "avl-tree-19.h"
size_t avl_subtree_size(const avl_node_t *n) {
  return n ? 1 + avl_subtree_size(n->left) + avl_subtree_size(n->right) : 0;
}
int avl_select_rank(const avl_node_t *n, size_t k, int *out) {
  if (!n || !out || k == 0 || k > avl_subtree_size(n))
    return 0;
  size_t l = avl_subtree_size(n->left);
  if (k == l + 1) {
    *out = n->key;
    return 1;
  }
  return k <= l ? avl_select_rank(n->left, k, out)
                : avl_select_rank(n->right, k - l - 1, out);
}
