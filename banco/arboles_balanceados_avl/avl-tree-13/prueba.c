#include <assert.h>
#include "avl-tree-13.h"
int main(void) { avl_node_t a={.key=1},c={.key=3},r={.key=2,.left=&a,.right=&c}; assert(ejecutar_avl_tree_13(&r,1,2)==2&&ejecutar_avl_tree_13(&r,4,2)==0&&ejecutar_avl_tree_13(NULL,0,9)==0); return 0; }
