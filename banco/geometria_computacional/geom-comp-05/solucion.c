#include "geom-comp-05.h"
#include <math.h>

static double cruz(punto2d_t a,punto2d_t b,punto2d_t c){return (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);}
static bool en_caja(punto2d_t a,punto2d_t b,punto2d_t p){return p.x>=fmin(a.x,b.x)&&p.x<=fmax(a.x,b.x)&&p.y>=fmin(a.y,b.y)&&p.y<=fmax(a.y,b.y);}
bool segmentos_intersectan(punto2d_t a,punto2d_t b,punto2d_t c,punto2d_t d){
 double x=cruz(a,b,c),y=cruz(a,b,d),z=cruz(c,d,a),w=cruz(c,d,b);
 if (((x>0&&y<0)||(x<0&&y>0))&&((z>0&&w<0)||(z<0&&w>0))) return true;
 return (x==0&&en_caja(a,b,c))||(y==0&&en_caja(a,b,d))||(z==0&&en_caja(c,d,a))||(w==0&&en_caja(c,d,b));
}
