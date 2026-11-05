#include <assert.h>
#include "avl-tree-03.h"
int main(void) { avl_node_t a={.key=1,.height=1}, b={.key=2,.height=2,.left=&a}, d={.key=4,.height=1}, r={.key=3,.height=3,.left=&b,.right=&d}; avl_node_t*n=ejecutar_avl_tree_03(&r); assert(n==&b&&b.right==&r&&r.right==&d&&r.height==2&&b.height==3); assert(ejecutar_avl_tree_03(NULL)==NULL); return 0; }
