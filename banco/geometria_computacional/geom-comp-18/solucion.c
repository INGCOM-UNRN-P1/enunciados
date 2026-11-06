#include "geom-comp-18.h"
#include <math.h>
punto2d_t rotar_punto(punto2d_t p,punto2d_t o,double a){double x=p.x-o.x,y=p.y-o.y,c=cos(a),s=sin(a);return(punto2d_t){o.x+x*c-y*s,o.y+x*s+y*c};}
