#include "../../dsu-union-01/dsu-union-01.h"
#include <assert.h>
int main(void){dsu_t d;dsu_init(&d,4);assert(d.n==4&&dsu_find(&d,2)==2);dsu_union(&d,0,1);dsu_union(&d,1,2);assert(dsu_find(&d,0)==dsu_find(&d,2));assert(dsu_find(&d,4)==-1);dsu_destroy(&d);assert(!d.parent&&d.n==0);return 0;}
