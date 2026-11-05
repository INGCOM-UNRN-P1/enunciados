#include "avl-tree-26.h"
static size_t avl_subtree_size(const avl_node_t *n) {
  return n ? 1 + avl_subtree_size(n->left) + avl_subtree_size(n->right) : 0;
}
#include <stdlib.h>
size_t avl_level_order(const avl_node_t *r, int *v, size_t cap) {
  if (!r)
    return 0;
  if (!v || !cap)
    return 0;
  size_t n = avl_subtree_size(r);
  if (n > cap)
    return 0;
  const avl_node_t **q = malloc(n * sizeof(*q));
  int *tmp = malloc(n * sizeof(int));
  if (!q || !tmp) {
    free(q);
    free(tmp);
    return 0;
  }
  size_t h = 0, t = 0;
  q[t++] = r;
  while (h < t) {
    const avl_node_t *x = q[h];
    tmp[h++] = x->key;
    if (x->left)
      q[t++] = x->left;
    if (x->right)
      q[t++] = x->right;
  }
  for (size_t i = 0; i < n; i++)
    v[i] = tmp[i];
  free(q);
  free(tmp);
  return n;
}
