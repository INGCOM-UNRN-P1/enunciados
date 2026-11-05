#include <assert.h>
#include "avl-tree-14.h"
int main(void) { avl_node_t a={.key=1,.height=1},r={.key=2,.height=2,.left=&a}; assert(ejecutar_avl_tree_14(&r)==0.5&&ejecutar_avl_tree_14(NULL)==0.0); return 0; }
