#include "avl-tree-12.h"
int ejecutar_avl_tree_12(const avl_node_t *r, int k, const avl_node_t **p,
                         const avl_node_t **s) {
  if (!p || !s)
    return 0;
  *p = *s = NULL;
  const avl_node_t *n = r;
  while (n) {
    if (k < n->key) {
      *s = n;
      n = n->left;
    } else if (k > n->key) {
      *p = n;
      n = n->right;
    } else {
      if (n->left) {
        *p = n->left;
        while ((*p)->right)
          *p = (*p)->right;
      }
      if (n->right) {
        *s = n->right;
        while ((*s)->left)
          *s = (*s)->left;
      }
      return 1;
    }
  }
  *p = *s = NULL;
  return 0;
}
