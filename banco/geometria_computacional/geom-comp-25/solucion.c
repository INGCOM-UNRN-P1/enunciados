#include "geom-comp-25.h"
#include <math.h>
static double dirigido(const punto2d_t*a,size_t n,const punto2d_t*b,size_t m){double h=0;for(size_t i=0;i<n;i++){double d=INFINITY;for(size_t j=0;j<m;j++){double q=hypot(a[i].x-b[j].x,a[i].y-b[j].y);if(q<d)d=q;}if(d>h)h=d;}return h;}
double hausdorff_discreta(const punto2d_t*a,size_t n,const punto2d_t*b,size_t m){if(!a||!b||!n||!m)return INFINITY;double x=dirigido(a,n,b,m),y=dirigido(b,m,a,n);return x>y?x:y;}
