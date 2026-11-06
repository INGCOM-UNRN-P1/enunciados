#include "../geom-comp-10.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
punto2d_t p[]={{0,0},{2,0},{2,2},{0,2},{1,1},{1,0}}, h[6];
size_t n=envolvente_convexa_graham(p,6,h,6); assert(n==4);
for(size_t i=0;i<n;i++)assert((h[i].x==0||h[i].x==2)&&(h[i].y==0||h[i].y==2));
assert(envolvente_convexa_graham(p,6,h,4)==4);
assert(envolvente_convexa_graham(p,6,h,3)==0);
return 0;
}
