#ifndef AVL_TREE_COMMON_H
#define AVL_TREE_COMMON_H

#include <stddef.h>
#include <stdlib.h>

typedef struct avl_node {
    int key;
    int height;
    struct avl_node *left;
    struct avl_node *right;
} avl_node_t;

static inline int avl_height(const avl_node_t *n) { return n ? n->height : 0; }
static inline int avl_max(int a, int b) { return a > b ? a : b; }
static inline void avl_update(avl_node_t *n) {
    if (n) n->height = 1 + avl_max(avl_height(n->left), avl_height(n->right));
}
static inline int avl_balance(const avl_node_t *n) {
    return n ? avl_height(n->left) - avl_height(n->right) : 0;
}
static inline avl_node_t *avl_rotate_right(avl_node_t *y) {
    if (!y || !y->left) return y;
    avl_node_t *x = y->left, *t = x->right;
    x->right = y; y->left = t; avl_update(y); avl_update(x); return x;
}
static inline avl_node_t *avl_rotate_left(avl_node_t *x) {
    if (!x || !x->right) return x;
    avl_node_t *y = x->right, *t = y->left;
    y->left = x; x->right = t; avl_update(x); avl_update(y); return y;
}
static inline avl_node_t *avl_new(int key) {
    avl_node_t *n = malloc(sizeof(*n));
    if (n) { n->key = key; n->height = 1; n->left = n->right = NULL; }
    return n;
}
static inline avl_node_t *avl_insert(avl_node_t *n, int key) {
    if (!n) return avl_new(key);
    if (key < n->key) n->left = avl_insert(n->left, key);
    else if (key > n->key) n->right = avl_insert(n->right, key);
    else return n;
    avl_update(n);
    int b = avl_balance(n);
    if (b > 1 && key < n->left->key) return avl_rotate_right(n);
    if (b < -1 && key > n->right->key) return avl_rotate_left(n);
    if (b > 1 && key > n->left->key) { n->left = avl_rotate_left(n->left); return avl_rotate_right(n); }
    if (b < -1 && key < n->right->key) { n->right = avl_rotate_right(n->right); return avl_rotate_left(n); }
    return n;
}
static inline avl_node_t *avl_min_node(avl_node_t *n) { while (n && n->left) n = n->left; return n; }
static inline avl_node_t *avl_delete(avl_node_t *n, int key) {
    if (!n) return NULL;
    if (key < n->key) n->left = avl_delete(n->left, key);
    else if (key > n->key) n->right = avl_delete(n->right, key);
    else {
        if (!n->left || !n->right) { avl_node_t *c = n->left ? n->left : n->right; free(n); return c; }
        avl_node_t *s = avl_min_node(n->right); n->key = s->key; n->right = avl_delete(n->right, s->key);
    }
    avl_update(n); int b = avl_balance(n);
    if (b > 1 && avl_balance(n->left) >= 0) return avl_rotate_right(n);
    if (b > 1 && avl_balance(n->left) < 0) { n->left = avl_rotate_left(n->left); return avl_rotate_right(n); }
    if (b < -1 && avl_balance(n->right) <= 0) return avl_rotate_left(n);
    if (b < -1 && avl_balance(n->right) > 0) { n->right = avl_rotate_right(n->right); return avl_rotate_left(n); }
    return n;
}
static inline void avl_destroy(avl_node_t *n) { if (n) { avl_destroy(n->left); avl_destroy(n->right); free(n); } }
static inline avl_node_t *avl_clone(const avl_node_t *n) {
    if (!n) return NULL;
    avl_node_t *c = avl_new(n->key); if (!c) return NULL;
    c->height = n->height; c->left = avl_clone(n->left); c->right = avl_clone(n->right);
    if ((n->left && !c->left) || (n->right && !c->right)) { avl_destroy(c); return NULL; }
    return c;
}
static inline int avl_contains(const avl_node_t *n, int key) {
    while (n) { if (key == n->key) return 1; n = key < n->key ? n->left : n->right; }
    return 0;
}
static inline int avl_valid(const avl_node_t *n, long lo, long hi, int *height) {
    if (!n) { *height = 0; return 1; }
    if (n->key <= lo || n->key >= hi) return 0;
    int l, r;
    if (!avl_valid(n->left, lo, n->key, &l) || !avl_valid(n->right, n->key, hi, &r)) return 0;
    *height = 1 + avl_max(l, r);
    return n->height == *height && l - r >= -1 && l - r <= 1;
}
#endif
