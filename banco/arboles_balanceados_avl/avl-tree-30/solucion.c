#include "avl-tree-30.h"
#include <stdlib.h>
static int h(const avl_generic_node_t *n) { return n ? n->height : 0; }
static int mx(int a, int b) { return a > b ? a : b; }
static void up(avl_generic_node_t *n) {
  n->height = 1 + mx(h(n->left), h(n->right));
}
static avl_generic_node_t *rr(avl_generic_node_t *y) {
  avl_generic_node_t *x = y->left, *t = x->right;
  x->right = y;
  y->left = t;
  up(y);
  up(x);
  return x;
}
static avl_generic_node_t *rl(avl_generic_node_t *x) {
  avl_generic_node_t *y = x->right, *t = y->left;
  y->left = x;
  x->right = t;
  up(x);
  up(y);
  return y;
}
static avl_generic_node_t *insert(avl_generic_node_t *n, void *k, void *v,
                                  avl_compare_fn cmp, int *ok) {
  if (!n) {
    n = malloc(sizeof(*n));
    if (!n) {
      *ok = 0;
      return NULL;
    }
    n->key = k;
    n->value = v;
    n->height = 1;
    n->left = n->right = NULL;
    return n;
  }
  int c = cmp(k, n->key);
  if (!c) {
    n->value = v;
    return n;
  }
  if (c < 0) {
    avl_generic_node_t *x = insert(n->left, k, v, cmp, ok);
    if (!*ok)
      return n;
    n->left = x;
  } else {
    avl_generic_node_t *x = insert(n->right, k, v, cmp, ok);
    if (!*ok)
      return n;
    n->right = x;
  }
  up(n);
  int b = h(n->left) - h(n->right);
  if (b > 1 && cmp(k, n->left->key) < 0)
    return rr(n);
  if (b < -1 && cmp(k, n->right->key) > 0)
    return rl(n);
  if (b > 1) {
    n->left = rl(n->left);
    return rr(n);
  }
  if (b < -1) {
    n->right = rr(n->right);
    return rl(n);
  }
  return n;
}
int avl_generic_put(avl_generic_node_t **r, void *k, void *v,
                    avl_compare_fn cmp) {
  if (!r || !cmp)
    return 0;
  int ok = 1;
  avl_generic_node_t *n = insert(*r, k, v, cmp, &ok);
  if (ok)
    *r = n;
  return ok;
}
void *avl_generic_get(const avl_generic_node_t *n, const void *k,
                      avl_compare_fn cmp) {
  if (!cmp)
    return NULL;
  while (n) {
    int c = cmp(k, n->key);
    if (!c)
      return n->value;
    n = c < 0 ? n->left : n->right;
  }
  return NULL;
}
void avl_generic_destroy(avl_generic_node_t **r, avl_free_fn fk,
                         avl_free_fn fv) {
  if (r && *r) {
    avl_generic_destroy(&(*r)->left, fk, fv);
    avl_generic_destroy(&(*r)->right, fk, fv);
    if (fk)
      fk((*r)->key);
    if (fv)
      fv((*r)->value);
    free(*r);
    *r = NULL;
  }
}
