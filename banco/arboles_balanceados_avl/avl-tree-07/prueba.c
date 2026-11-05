#include <assert.h>
#include "avl-tree-07.h"
int main(void) { avl_node_t a={.key=2}, r={.key=3,.left=&a}; assert(ejecutar_avl_tree_07(&r,2)==&a&&!ejecutar_avl_tree_07(&r,4)&&!ejecutar_avl_tree_07(NULL,2)); return 0; }
