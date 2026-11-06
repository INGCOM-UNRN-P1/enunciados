#include "geom-comp-26.h"
#include <math.h>
bool asignar_sitios(const punto2d_t*p,size_t n,const punto2d_t*s,size_t m,size_t*out){if((!p&&n)||!s||!m||(!out&&n))return false;for(size_t i=0;i<n;i++){size_t k=0;double best=INFINITY;for(size_t j=0;j<m;j++){double x=p[i].x-s[j].x,y=p[i].y-s[j].y,d=x*x+y*y;if(d<best){best=d;k=j;}}out[i]=k;}return true;}
