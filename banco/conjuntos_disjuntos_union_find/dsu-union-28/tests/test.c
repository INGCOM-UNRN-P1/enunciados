#include "../dsu-union-28.h"
#include <assert.h>
int main(void){size_t p[]={0,0,1,2};size_t rank[]={0},size[]={0};dsu_t d={4,p,rank,size,1};size_t q[]={3,1,0};bool ok=false;assert(dsu_measure_find_steps(&d,q,3,&ok)==4&&ok);assert(p[3]==2);size_t bad[]={4};assert(dsu_measure_find_steps(&d,bad,1,&ok)==0&&!ok);assert(dsu_measure_find_steps(&d,NULL,0,&ok)==0&&ok);}
