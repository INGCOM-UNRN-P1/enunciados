#include "geom-comp-06.h"
#include <math.h>

double distancia_punto_segmento(punto2d_t p,punto2d_t a,punto2d_t b){
 double dx=b.x-a.x,dy=b.y-a.y,den=dx*dx+dy*dy;
 if(den==0.0) return hypot(p.x-a.x,p.y-a.y);
 double t=((p.x-a.x)*dx+(p.y-a.y)*dy)/den; if(t<0)t=0;if(t>1)t=1;
 return hypot(p.x-(a.x+t*dx),p.y-(a.y+t*dy));
}
