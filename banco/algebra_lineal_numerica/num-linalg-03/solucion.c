#include "num-linalg-03.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

double secante(double x0,double x1,double tol,size_t max){if(!isfinite(x0)||!isfinite(x1)||tol<=0||!isfinite(tol)||!max)return NAN;double y0=x0*x0-2,y1=x1*x1-2;for(size_t i=0;i<max;i++){double d=y1-y0;if(fabs(d)<=DBL_EPSILON*fmax(1.0,fabs(y1)))return NAN;double x2=x1-y1*(x1-x0)/d;if(!isfinite(x2))return NAN;if(fabs(x2-x1)<=tol)return x2;x0=x1;y0=y1;x1=x2;y1=x1*x1-2;}return NAN;}
