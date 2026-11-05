#include <assert.h>
#include "avl-tree-01.h"
int main(void) { avl_node_t a={.key=1,.height=1}, b={.key=2,.height=1,.left=&a}; int h,fb; assert(ejecutar_avl_tree_01(&b,&h,&fb)&&h==2&&fb==1); assert(ejecutar_avl_tree_01(NULL,&h,&fb)&&h==0&&fb==0); assert(!ejecutar_avl_tree_01(&b,NULL,&fb)); return 0; }
