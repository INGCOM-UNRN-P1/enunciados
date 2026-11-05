#include <assert.h>
#include "avl-tree-05.h"
int main(void) { avl_node_t a={.key=12,.height=1}, c={.key=13,.height=2,.left=&a}, d={.key=18,.height=1}, b={.key=16,.height=3,.left=&c,.right=&d}, r={.key=10,.height=4,.right=&b}; avl_node_t*n=ejecutar_avl_tree_05(&r); assert(n==&c&&c.left==&r&&c.right==&b&&r.right==&a&&r.height==2&&b.height==2&&c.height==3); return 0; }
