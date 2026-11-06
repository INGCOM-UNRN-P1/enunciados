#include "num-linalg-13.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double interpolar_lagrange(const double*x,const double*y,int n,double p){if(!x||!y||n<=0||!isfinite(p))return NAN;double s=0;for(int i=0;i<n;i++){if(!isfinite(x[i])||!isfinite(y[i]))return NAN;double term=y[i];for(int j=0;j<n;j++)if(i!=j){double d=x[i]-x[j];if(d==0)return NAN;term*= (p-x[j])/d;}s+=term;}return isfinite(s)?s:NAN;}
