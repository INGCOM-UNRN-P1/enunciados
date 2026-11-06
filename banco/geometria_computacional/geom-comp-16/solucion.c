#include "geom-comp-16.h"
#include <math.h>
bool segmento_circulo_intersecta(punto2d_t a,punto2d_t b,circulo2d_t c){if(c.radio<0)return false;double x=b.x-a.x,y=b.y-a.y,d=x*x+y*y,t=d?((c.centro.x-a.x)*x+(c.centro.y-a.y)*y)/d:0;if(t<0)t=0;if(t>1)t=1;x=a.x+t*x-c.centro.x;y=a.y+t*y-c.centro.y;return x*x+y*y<=c.radio*c.radio;}
