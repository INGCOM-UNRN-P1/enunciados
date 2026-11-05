#include "avl-tree-18.h"
static void put(avl_node_t **t, int k) { *t = avl_insert(*t, k); }
static void walk(const avl_node_t *n, int p, avl_node_t **a, avl_node_t **b) {
  if (!n)
    return;
  walk(n->left, p, a, b);
  put(n->key < p ? a : b, n->key);
  walk(n->right, p, a, b);
}
void avl_split(const avl_node_t *r, int p, avl_node_t **a, avl_node_t **b) {
  if (!a || !b || a == b)
    return;
  *a = NULL;
  *b = NULL;
  walk(r, p, a, b);
}
