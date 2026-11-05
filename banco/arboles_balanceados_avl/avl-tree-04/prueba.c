#include <assert.h>
#include "avl-tree-04.h"
int main(void) { avl_node_t a={.key=2,.height=1}, d={.key=8,.height=1}, c={.key=7,.height=2,.right=&d}, b={.key=4,.height=3,.left=&a,.right=&c}, r={.key=10,.height=4,.left=&b}; avl_node_t*n=ejecutar_avl_tree_04(&r); assert(n==&c&&c.left==&b&&c.right==&r&&r.left==&d&&b.height==2&&r.height==2&&c.height==3); return 0; }
