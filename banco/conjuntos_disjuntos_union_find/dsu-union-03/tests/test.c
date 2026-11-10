#include "../dsu-union-03.h"
#include <assert.h>
int main(void){size_t p[]={0,0,1,2};dsu03_t d={4,p};assert(dsu03_find(&d,3)==0);assert(p[2]==0&&p[3]==0);assert(dsu03_find(&d,4)==-1);return 0;}
