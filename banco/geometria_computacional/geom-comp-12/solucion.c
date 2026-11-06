#include "geom-comp-12.h"
#include <math.h>
bool par_mas_cercano(const punto2d_t*p,size_t n,size_t*a,size_t*b){if(!p||n<2||!a||!b)return false;double best=INFINITY;size_t bi=0,bj=1;for(size_t i=0;i<n;i++)for(size_t j=i+1;j<n;j++){double x=p[i].x-p[j].x,y=p[i].y-p[j].y,d=x*x+y*y;if(d<best){best=d;bi=i;bj=j;}}*a=bi;*b=bj;return true;}
