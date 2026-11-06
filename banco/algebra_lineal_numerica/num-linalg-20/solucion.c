#include "num-linalg-20.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double euler_edo(double(*f)(double,double),double x,double y,double end,int n){if(!f||!isfinite(x)||!isfinite(y)||!isfinite(end)||n<=0)return NAN;double h=(end-x)/n;for(int i=0;i<n;i++){double k=f(x,y);if(!isfinite(k))return NAN;y+=h*k;x+=h;if(!isfinite(y)||!isfinite(x))return NAN;}return y;}
