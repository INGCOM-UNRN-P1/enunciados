#include <assert.h>
#include "avl-tree-09.h"
int main(void) { avl_node_t a={.key=1},c={.key=3},r={.key=2,.left=&a,.right=&c}; assert(ejecutar_avl_tree_09(&r)); c.key=0; assert(!ejecutar_avl_tree_09(&r)); avl_node_t x={.key=1},y={.key=2,.right=&x},z={.key=3,.right=&y}; assert(!ejecutar_avl_tree_09(&z)); assert(ejecutar_avl_tree_09(NULL)); return 0; }
