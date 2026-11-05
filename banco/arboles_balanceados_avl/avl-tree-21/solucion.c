#include "avl-tree-21.h"
#include <stdlib.h>
size_t avl_serialize_level(const avl_node_t *r, int *v, size_t *ix,
                           size_t cap) {
  if (!r)
    return 0;
  if (!v || !ix || !cap)
    return 0;
  const avl_node_t **q = malloc(cap * sizeof(*q));
  size_t *qi = malloc(cap * sizeof(*qi));
  if (!q || !qi) {
    free(q);
    free(qi);
    return 0;
  }
  size_t h = 0, t = 0;
  q[t] = r;
  qi[t++] = 0;
  while (h < t) {
    const avl_node_t *n = q[h];
    size_t i = qi[h++];
    if (i >= cap) {
      free(q);
      free(qi);
      return 0;
    }
    v[h - 1] = n->key;
    ix[h - 1] = i;
    if (n->left) {
      if (t == cap || i > (cap - 2) / 2) {
        free(q);
        free(qi);
        return 0;
      }
      q[t] = n->left;
      qi[t++] = 2 * i + 1;
    }
    if (n->right) {
      if (t == cap || i > (cap - 3) / 2) {
        free(q);
        free(qi);
        return 0;
      }
      q[t] = n->right;
      qi[t++] = 2 * i + 2;
    }
  }
  free(q);
  free(qi);
  return h;
}
