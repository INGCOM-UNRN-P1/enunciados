#include <assert.h>
#include "avl-tree-16.h"
int main(void) { avl_node_t*r=NULL; for(int i=1;i<=7;i++){avl_node_t*n=avl_new(i); assert(n); if(!r)r=n; else{avl_node_t*t=r;while(t->right)t=t->right;t->right=n;}} r=ejecutar_avl_tree_16(r); int h; assert(avl_valid(r,0,8,&h)&&h==3); avl_destroy(r); return 0; }
