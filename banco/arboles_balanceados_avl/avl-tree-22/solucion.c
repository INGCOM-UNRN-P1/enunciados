#include "avl-tree-22.h"
static avl_node_t *build(const int *a, size_t lo, size_t hi, int *ok) {
  if (lo >= hi || !*ok)
    return NULL;
  size_t m = lo + (hi - lo) / 2;
  avl_node_t *n = avl_new(a[m]);
  if (!n) {
    *ok = 0;
    return NULL;
  }
  n->left = build(a, lo, m, ok);
  n->right = build(a, m + 1, hi, ok);
  if (!*ok) {
    avl_destroy(n);
    return NULL;
  }
  avl_update(n);
  return n;
}
avl_node_t *avl_from_sorted(const int *a, size_t n) {
  if (!n)
    return NULL;
  if (!a)
    return NULL;
  for (size_t i = 1; i < n; i++)
    if (a[i - 1] >= a[i])
      return NULL;
  int ok = 1;
  avl_node_t *r = build(a, 0, n, &ok);
  if (!ok) {
    avl_destroy(r);
    return NULL;
  }
  return r;
}
