#include "avl-tree-27.h"
#include <stdio.h>
static void pr(const avl_node_t *n, FILE *f, size_t d) {
  if (!n)
    return;
  pr(n->right, f, d + 1);
  for (size_t i = 0; i < d; i++)
    fputs("  ", f);
  fprintf(f, "%d\n", n->key);
  pr(n->left, f, d + 1);
}
void avl_print_indented(const avl_node_t *r, FILE *f) {
  if (f)
    pr(r, f, 0);
}
