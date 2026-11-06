#include "geom-comp-24.h"
#include <math.h>
bool proyectar_punto_recta(punto2d_t p,punto2d_t a,punto2d_t b,punto2d_t*out){double x=b.x-a.x,y=b.y-a.y,d=x*x+y*y;if(!out||d==0)return false;double t=((p.x-a.x)*x+(p.y-a.y)*y)/d;*out=(punto2d_t){a.x+t*x,a.y+t*y};return true;}
