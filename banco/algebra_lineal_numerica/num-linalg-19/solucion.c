#include "num-linalg-19.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double derivada_central(double(*f)(double),double x,double h){if(!f||!isfinite(x)||!isfinite(h)||h==0)return NAN;double a=f(x+h),b=f(x-h);if(!isfinite(a)||!isfinite(b))return NAN;double d=(a-b)/(2*h);return isfinite(d)?d:NAN;}
