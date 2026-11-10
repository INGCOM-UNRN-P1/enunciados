#include "../dsu-union-06.h"
#include <assert.h>
int main(void){size_t p[]={0,1,2},s[]={1,1,1};dsu06_t d={3,p,s};assert(dsu06_union(&d,0,1)==1);assert(dsu06_union(&d,0,2)==1);assert(s[0]==3);assert(dsu06_union(&d,1,2)==0);assert(dsu06_union(&d,3,0)==-1);return 0;}
