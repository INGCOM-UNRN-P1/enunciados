#include <assert.h>
#include "avl-tree-06.h"
int main(void) { avl_node_t*r=NULL; r=ejecutar_avl_tree_06(r,30); r=ejecutar_avl_tree_06(r,10); r=ejecutar_avl_tree_06(r,20); assert(r&&r->key==20); r=ejecutar_avl_tree_06(r,20); int h; assert(avl_valid(r,-2147483649L,2147483648L,&h)&&h==2); avl_destroy(r); return 0; }
