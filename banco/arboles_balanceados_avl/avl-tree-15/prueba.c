#include <assert.h>
#include "avl-tree-15.h"
int main(void) { avl_node_t a={.key=1,.height=1},r={.key=2,.height=2,.left=&a}; avl_node_t*c=ejecutar_avl_tree_15(&r); assert(c&&c!=&r&&c->left!=&a&&c->left->key==1); c->left->key=7; assert(a.key==1); avl_destroy(c); assert(ejecutar_avl_tree_15(NULL)==NULL); return 0; }
