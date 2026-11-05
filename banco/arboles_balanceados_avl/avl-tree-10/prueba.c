#include <assert.h>
#include "avl-tree-10.h"
int main(void) { avl_node_t a={.key=1},c={.key=3},r={.key=2,.left=&a,.right=&c}; int out[3]={0}; assert(ejecutar_avl_tree_10(&r,out,2)==2&&out[0]==1&&out[1]==2); assert(ejecutar_avl_tree_10(NULL,out,3)==0&&ejecutar_avl_tree_10(&r,NULL,3)==0); return 0; }
