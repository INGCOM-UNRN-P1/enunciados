#include <assert.h>
#include "avl-tree-12.h"
int main(void) { avl_node_t a={.key=1},c={.key=3},r={.key=2,.left=&a,.right=&c}; const avl_node_t*p,*s; assert(ejecutar_avl_tree_12(&r,2,&p,&s)&&p==&a&&s==&c); assert(ejecutar_avl_tree_12(&r,1,&p,&s)&&p==NULL&&s==&r); assert(!ejecutar_avl_tree_12(&r,9,&p,&s)&&p==NULL&&s==NULL); return 0; }
