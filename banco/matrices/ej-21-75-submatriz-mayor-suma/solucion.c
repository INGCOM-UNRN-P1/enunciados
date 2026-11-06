#include "ej-21-75-submatriz-mayor-suma.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int submatriz_2x2_mayor(const double*A,size_t m,size_t n,double*s,size_t*fi,size_t*co){if(!A||!s||!fi||!co||m<2||n<2||m>SIZE_MAX/n)return 0;*s=-INFINITY;for(size_t i=0;i+1<m;i++)for(size_t j=0;j+1<n;j++){double v=A[i*n+j]+A[i*n+j+1]+A[(i+1)*n+j]+A[(i+1)*n+j+1];if(v>*s){*s=v;*fi=i;*co=j;}}return 1;}
