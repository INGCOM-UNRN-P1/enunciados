#include "geom-comp-13.h"
#include <math.h>
bool calcular_aabb(const punto2d_t*p,size_t n,caja2d_t*out){if(!p||!out||!n)return false;caja2d_t c={p[0].x,p[0].y,p[0].x,p[0].y};for(size_t i=1;i<n;i++){if(p[i].x<c.min_x)c.min_x=p[i].x;if(p[i].x>c.max_x)c.max_x=p[i].x;if(p[i].y<c.min_y)c.min_y=p[i].y;if(p[i].y>c.max_y)c.max_y=p[i].y;}*out=c;return true;}
