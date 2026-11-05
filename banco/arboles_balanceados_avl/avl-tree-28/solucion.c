#include "avl-tree-28.h"
#include <limits.h>
int avl_is_valid(const avl_node_t *r) {
  int h = 0;
  return avl_valid(r, LONG_MIN, LONG_MAX, &h);
}
