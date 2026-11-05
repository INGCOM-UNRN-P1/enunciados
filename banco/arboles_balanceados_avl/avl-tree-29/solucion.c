#include "avl-tree-29.h"
#include <stdlib.h>
static int h(const avl_dict_node_t *n) { return n ? n->height : 0; }
static int mx(int a, int b) { return a > b ? a : b; }
static void up(avl_dict_node_t *n) {
  n->height = 1 + mx(h(n->left), h(n->right));
}
static avl_dict_node_t *rr(avl_dict_node_t *y) {
  avl_dict_node_t *x = y->left, *t = x->right;
  x->right = y;
  y->left = t;
  up(y);
  up(x);
  return x;
}
static avl_dict_node_t *rl(avl_dict_node_t *x) {
  avl_dict_node_t *y = x->right, *t = y->left;
  y->left = x;
  x->right = t;
  up(x);
  up(y);
  return y;
}
static avl_dict_node_t *put(avl_dict_node_t *n, int k, int v, int *ok) {
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
  if (k == n->key) {
    n->value = v;
    return n;
  }
  if (k < n->key) {
    avl_dict_node_t *c = put(n->left, k, v, ok);
    if (!*ok)
      return n;
    n->left = c;
  } else {
    avl_dict_node_t *c = put(n->right, k, v, ok);
    if (!*ok)
      return n;
    n->right = c;
  }
  up(n);
  int bal = h(n->left) - h(n->right);
  if (bal > 1 && k < n->left->key)
    return rr(n);
  if (bal < -1 && k > n->right->key)
    return rl(n);
  if (bal > 1 && k > n->left->key) {
    n->left = rl(n->left);
    return rr(n);
  }
  if (bal < -1 && k < n->right->key) {
    n->right = rr(n->right);
    return rl(n);
  }
  return n;
}
int avl_dict_put(avl_dict_node_t **r, int k, int v) {
  if (!r)
    return 0;
  int ok = 1;
  avl_dict_node_t *n = put(*r, k, v, &ok);
  if (ok)
    *r = n;
  return ok;
}
int avl_dict_get(const avl_dict_node_t *n, int k, int *v) {
  if (!v)
    return 0;
  while (n) {
    if (k == n->key) {
      *v = n->value;
      return 1;
    }
    n = k < n->key ? n->left : n->right;
  }
  return 0;
}
void avl_dict_destroy(avl_dict_node_t **r) {
  if (r && *r) {
    avl_dict_destroy(&(*r)->left);
    avl_dict_destroy(&(*r)->right);
    free(*r);
    *r = NULL;
  }
}
