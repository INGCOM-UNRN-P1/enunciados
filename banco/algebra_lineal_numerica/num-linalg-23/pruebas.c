#include "num-linalg-23.h"
#include <assert.h>
#include <math.h>

int main(void){double z0=0,z1=0; assert(box_muller(exp(-.5),0,&z0,&z1)); assert(fabs(z0-1)<1e-12&&fabs(z1)<1e-12); assert(!box_muller(0,0,&z0,&z1)); assert(!box_muller(.5,.5,&z0,&z0));return 0;}
