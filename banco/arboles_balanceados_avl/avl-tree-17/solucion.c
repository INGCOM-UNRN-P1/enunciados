#include "avl-tree-17.h"
static avl_node_t *merge17(avl_node_t *out, const avl_node_t *n, int *ok) {
  if (!n || !*ok)
    return out;
  out = merge17(out, n->left, ok);
  if (!*ok)
    return out;
  if (!out || !avl_contains(out, n->key)) {
    out = avl_insert(out, n->key);
    if (!out)
      *ok = 0;
  }
  return merge17(out, n->right, ok);
}
avl_node_t *ejecutar_avl_tree_17(const avl_node_t *a, const avl_node_t *b) {
  int ok = 1;
  avl_node_t *r = merge17(NULL, a, &ok);
  r = merge17(r, b, &ok);
  if (!ok) {
    avl_destroy(r);
    return NULL;
  }
  return r;
}
