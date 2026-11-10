#include "../dsu-union-02.h"
#include <assert.h>
int main(void){dsu02_t d;assert(dsu02_init(&d,3));assert(d.n==3&&d.parent[2]==2);dsu02_destroy(&d);assert(!d.parent&&!d.n);assert(!dsu02_init(&d,0));return 0;}
