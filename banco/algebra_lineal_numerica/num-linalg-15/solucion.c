#include "num-linalg-15.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
int minimos_cuadrados_lineales(const double*x,const double*y,int n,double*a,double*b){if(!x||!y||!a||!b||n<2)return 0;double sx=0,sy=0,sxx=0,sxy=0;for(int i=0;i<n;i++){if(!isfinite(x[i])||!isfinite(y[i]))return 0;sx+=x[i];sy+=y[i];sxx+=x[i]*x[i];sxy+=x[i]*y[i];}double d=n*sxx-sx*sx;if(d==0||!isfinite(d))return 0;double aa=(n*sxy-sx*sy)/d,bb=(sy-aa*sx)/n;if(!isfinite(aa)||!isfinite(bb))return 0;*a=aa;*b=bb;return 1;}
