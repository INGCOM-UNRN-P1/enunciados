#include "geom-comp-20.h"
#include <math.h>
bool reflejar_punto_recta(punto2d_t p,punto2d_t a,punto2d_t b,punto2d_t*out){double x=b.x-a.x,y=b.y-a.y,d=x*x+y*y;if(!out||d==0)return false;double t=((p.x-a.x)*x+(p.y-a.y)*y)/d,qx=a.x+t*x,qy=a.y+t*y;*out=(punto2d_t){2*qx-p.x,2*qy-p.y};return true;}
