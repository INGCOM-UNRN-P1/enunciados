#include "ej-21-76-matriz-dispersa-sparse.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int sparse_set(double*v,unsigned char*o,size_t m,size_t n,size_t i,size_t j,double x){if(!v||!o||!m||!n||i>=m||j>=n||m>SIZE_MAX/n)return 0;size_t k=i*n+j;v[k]=x;o[k]=(x!=0.0);return 1;}
double sparse_get(const double*v,const unsigned char*o,size_t m,size_t n,size_t i,size_t j,int*ok){if(ok)*ok=0;if(!v||!o||!ok||!m||!n||i>=m||j>=n||m>SIZE_MAX/n)return 0;*ok=1;size_t k=i*n+j;return o[k]?v[k]:0;}
