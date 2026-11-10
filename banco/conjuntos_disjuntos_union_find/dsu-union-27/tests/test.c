#include "../dsu-union-27.h"
#include <assert.h>
int main(void){size_t p[]={0,0,1,2,4};size_t rank[]={0},size[]={0};dsu_t d={5,p,rank,size,2};assert(dsu_flatten_all(&d)==2);assert(p[1]==0&&p[2]==0&&p[3]==0&&p[4]==4);assert(dsu_flatten_all(&d)==0);assert(dsu_flatten_all(NULL)==0);}
