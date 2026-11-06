#include "geom-comp-19.h"
#include <math.h>
bool escalar_trasladar(punto2d_t*p,size_t n,double sx,double sy,punto2d_t t){if(!p&&n)return false;for(size_t i=0;i<n;i++){p[i].x=p[i].x*sx+t.x;p[i].y=p[i].y*sy+t.y;}return true;}
