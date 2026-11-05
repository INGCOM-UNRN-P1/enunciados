#include <assert.h>
#include "avl-tree-02.h"
int main(void) { avl_node_t a={.key=1,.height=1}, d={.key=4,.height=1}, b={.key=3,.height=2,.right=&d}, r={.key=2,.height=3,.left=&a,.right=&b}; avl_node_t*n=ejecutar_avl_tree_02(&r); assert(n==&b&&b.left==&r&&r.left==&a&&r.height==2&&b.height==3); assert(ejecutar_avl_tree_02(NULL)==NULL); return 0; }
