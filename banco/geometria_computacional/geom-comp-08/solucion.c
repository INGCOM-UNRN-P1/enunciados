#include "geom-comp-08.h"
#include <math.h>

static double cr(punto2d_t a,punto2d_t b,punto2d_t p){return (b.x-a.x)*(p.y-a.y)-(b.y-a.y)*(p.x-a.x);}
bool punto_en_poligono(punto2d_t p,const punto2d_t *v,size_t n){
 if (!v || n < 3) return false;
 bool dentro = false;
 for(size_t i=0,j=n-1;i<n;j=i++){
  double z=cr(v[j],v[i],p); if(z==0&&p.x>=fmin(v[j].x,v[i].x)&&p.x<=fmax(v[j].x,v[i].x)&&p.y>=fmin(v[j].y,v[i].y)&&p.y<=fmax(v[j].y,v[i].y))return true;
  if(((v[i].y>p.y)!=(v[j].y>p.y))&&(p.x<(v[j].x-v[i].x)*(p.y-v[i].y)/(v[j].y-v[i].y)+v[i].x))dentro=!dentro;
 } return dentro;
}
