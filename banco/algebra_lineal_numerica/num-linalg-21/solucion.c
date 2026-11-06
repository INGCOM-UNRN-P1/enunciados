#include "num-linalg-21.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double heun_edo(double(*f)(double,double),double x,double y,double end,int n){if(!f||!isfinite(x)||!isfinite(y)||!isfinite(end)||n<=0)return NAN;double h=(end-x)/n;for(int i=0;i<n;i++){double k1=f(x,y),k2=f(x+h,y+h*k1);if(!isfinite(k1)||!isfinite(k2))return NAN;y+=h*(k1+k2)/2;x+=h;if(!isfinite(y)||!isfinite(x))return NAN;}return y;}
