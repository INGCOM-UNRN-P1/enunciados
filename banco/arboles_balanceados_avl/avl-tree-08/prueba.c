#include <assert.h>
#include "avl-tree-08.h"
int main(void) { avl_node_t*r=NULL; r=avl_insert(r,2); r=avl_insert(r,1); r=avl_insert(r,3); avl_node_t*old=r; r=ejecutar_avl_tree_08(r,9); assert(r==old&&avl_contains(r,2)); r=ejecutar_avl_tree_08(r,2); assert(!avl_contains(r,2)&&avl_contains(r,1)&&avl_contains(r,3)); int h; assert(avl_valid(r,-2147483649L,2147483648L,&h)); avl_destroy(r); return 0; }
