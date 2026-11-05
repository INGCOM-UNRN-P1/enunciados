#include "avl-tree-16.h"
static avl_node_t *flatten16(avl_node_t *n, avl_node_t **tail) {
  if (!n)
    return NULL;
  avl_node_t *r = n->right;
  avl_node_t *head = flatten16(n->left, tail);
  avl_node_t *mid = n;
  n->left = n->right = NULL;
  if (*tail)
    (*tail)->right = mid;
  else
    head = mid;
  *tail = mid;
  flatten16(r, tail);
  return head;
}
static avl_node_t *build16(avl_node_t **p, size_t n) {
  if (!n)
    return NULL;
  avl_node_t *l = build16(p, n / 2);
  avl_node_t *r = *p;
  *p = r->right;
  r->left = l;
  r->right = build16(p, n - n / 2 - 1);
  avl_update(r);
  return r;
}
static size_t count16(const avl_node_t *n) {
  return n ? 1 + count16(n->left) + count16(n->right) : 0;
}
avl_node_t *ejecutar_avl_tree_16(avl_node_t *n) {
  avl_node_t *tail = NULL;
  avl_node_t *list = flatten16(n, &tail);
  size_t count = count16(list);
  return build16(&list, count);
}
