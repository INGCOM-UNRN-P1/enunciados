#include "num-linalg-01.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

double raiz_newton(double s,double tol,size_t max){if(!isfinite(s)||s<0||!isfinite(tol)||tol<=0||!max)return NAN;if(s==0)return 0;double x=s>=1?s:1;for(size_t i=0;i<max;i++){double y=0.5*(x+s/x);if(fabs(y-x)<=tol*fmax(1.0,y))return y;x=y;}return NAN;}
