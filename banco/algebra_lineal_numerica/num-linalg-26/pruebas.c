#include "num-linalg-26.h"
#include <assert.h>
#include <math.h>
int main(void) {
    double r[]={1,1,1,1}, i[]={0,0,0,0}; assert(fft_radix2(r,i,4));
    assert(fabs(r[0]-4)<1e-12); for(int k=1;k<4;k++) assert(fabs(r[k])<1e-12 && fabs(i[k])<1e-12);
    double impulse[]={1,0,0,0}, imag[]={0,0,0,0}; assert(fft_radix2(impulse,imag,4));
    for(int k=0;k<4;k++) assert(fabs(impulse[k]-1)<1e-12 && fabs(imag[k])<1e-12);
    double bad[]={2,3,4}, bi[]={0,0,0}; assert(!fft_radix2(bad,bi,3) && bad[0]==2);
    return 0;
}
