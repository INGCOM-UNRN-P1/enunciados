#include <assert.h>
#include "avl-tree-11.h"
int main(void) { avl_node_t a={.key=1},b={.key=3},r={.key=2,.left=&a,.right=&b}; int mn,mx; assert(ejecutar_avl_tree_11(&r,&mn,&mx)&&mn==1&&mx==3); assert(!ejecutar_avl_tree_11(NULL,&mn,&mx)); assert(!ejecutar_avl_tree_11(&r,&mn,NULL)); return 0; }
