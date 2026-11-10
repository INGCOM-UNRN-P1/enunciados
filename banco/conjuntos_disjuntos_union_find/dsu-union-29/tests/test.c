#include "../dsu-union-29.h"
#include <assert.h>
int main(void){size_t p[]={0,0,0,3},rank[]={1,0,0,0},size[]={3,0,0,1};dsu_t d={4,p,rank,size,2};assert(dsu_validate_invariants(&d));p[2]=9;assert(!dsu_validate_invariants(&d));p[2]=0;size[0]=2;assert(!dsu_validate_invariants(&d));dsu_t empty={0,NULL,NULL,NULL,0};assert(dsu_validate_invariants(&empty));assert(!dsu_validate_invariants(NULL));}
