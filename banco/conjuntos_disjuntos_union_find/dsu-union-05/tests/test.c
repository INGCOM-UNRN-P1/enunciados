#include "../dsu-union-05.h"
#include <assert.h>
int main(void){size_t p[]={0,1,2,3},r[]={0,0,0,0};dsu05_t d={4,p,r};assert(dsu05_union(&d,0,1)==1);assert(dsu05_union(&d,2,3)==1);assert(dsu05_union(&d,0,2)==1);assert(dsu05_union(&d,1,3)==0);assert(dsu05_union(&d,4,1)==-1);return 0;}
