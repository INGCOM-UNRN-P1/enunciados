#include "geom-comp-23.h"
#include <math.h>
static double ori(punto2d_t a,punto2d_t b,punto2d_t c){return(b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);}
static bool caja_contiene(punto2d_t a,punto2d_t b,punto2d_t p){return p.x>=fmin(a.x,b.x)&&p.x<=fmax(a.x,b.x)&&p.y>=fmin(a.y,b.y)&&p.y<=fmax(a.y,b.y);}
static bool cruce(punto2d_t a,punto2d_t b,punto2d_t c,punto2d_t d){double x=ori(a,b,c),y=ori(a,b,d),z=ori(c,d,a),w=ori(c,d,b);if(((x>0&&y<0)||(x<0&&y>0))&&((z>0&&w<0)||(z<0&&w>0)))return true;return(x==0&&caja_contiene(a,b,c))||(y==0&&caja_contiene(a,b,d))||(z==0&&caja_contiene(c,d,a))||(w==0&&caja_contiene(c,d,b));}
bool polilinea_autointersecta(const punto2d_t*p,size_t n){if(!p||n<4)return false;for(size_t i=0;i+1<n;i++)for(size_t j=i+2;j+1<n;j++)if(cruce(p[i],p[i+1],p[j],p[j+1]))return true;return false;}
