#include <assert.h>
#include "avl-tree-17.h"
int main(void) { avl_node_t*a=NULL,*b=NULL; a=avl_insert(a,1);a=avl_insert(a,3);b=avl_insert(b,2);b=avl_insert(b,4);avl_node_t*r=ejecutar_avl_tree_17(a,b);int h;assert(r&&avl_valid(r,0,5,&h)&&h==3&&avl_contains(r,1)&&avl_contains(r,4));assert(avl_contains(a,3)&&avl_contains(b,2));avl_destroy(r);avl_destroy(a);avl_destroy(b);assert(ejecutar_avl_tree_17(NULL,NULL)==NULL); return 0; }
