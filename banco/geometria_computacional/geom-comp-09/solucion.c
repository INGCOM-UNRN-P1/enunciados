#include "geom-comp-09.h"
#include <math.h>

bool poligono_es_convexo(const punto2d_t *v,size_t n){
 if (!v || n < 3) return false;
 int signo = 0;
 for(size_t i=0;i<n;i++){punto2d_t a=v[i],b=v[(i+1)%n],c=v[(i+2)%n];
  double z=(b.x-a.x)*(c.y-b.y)-(b.y-a.y)*(c.x-b.x); int s=(z>0)-(z<0); if(s&&signo&&s!=signo)return false;if(s)signo=s;
 } return signo!=0;
}
