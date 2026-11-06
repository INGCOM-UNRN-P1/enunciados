#include "num-linalg-23.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
int box_muller(double u1,double u2,double*z0,double*z1){if(!z0||!z1||z0==z1||!isfinite(u1)||!isfinite(u2)||u1<=0||u1>=1||u2<0||u2>=1)return 0;double r=sqrt(-2*log(u1)),t=6.2831853071795864769*u2;double a=r*cos(t),b=r*sin(t);if(!isfinite(a)||!isfinite(b))return 0;*z0=a;*z1=b;return 1;}
