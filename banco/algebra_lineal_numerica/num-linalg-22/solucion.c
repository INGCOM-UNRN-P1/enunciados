#include "num-linalg-22.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double rk4_edo(double(*f)(double,double),double x,double y,double end,int n){if(!f||!isfinite(x)||!isfinite(y)||!isfinite(end)||n<=0)return NAN;double h=(end-x)/n;for(int i=0;i<n;i++){double k1=f(x,y),k2=f(x+h/2,y+h*k1/2),k3=f(x+h/2,y+h*k2/2),k4=f(x+h,y+h*k3);if(!isfinite(k1)||!isfinite(k2)||!isfinite(k3)||!isfinite(k4))return NAN;y+=h*(k1+2*k2+2*k3+k4)/6;x+=h;if(!isfinite(y)||!isfinite(x))return NAN;}return y;}
