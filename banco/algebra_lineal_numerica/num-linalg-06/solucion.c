#include "num-linalg-06.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int descomponer_lu(const double*A,size_t n,double*L,double*U){if(!A||!L||!U||!n||n>SIZE_MAX/n||n*n>SIZE_MAX/sizeof(double))return 0;memset(L,0,n*n*sizeof(*L));memset(U,0,n*n*sizeof(*U));for(size_t i=0;i<n;i++){for(size_t k=i;k<n;k++){double s=0;for(size_t j=0;j<i;j++)s+=L[i*n+j]*U[j*n+k];U[i*n+k]=A[i*n+k]-s;}if(U[i*n+i]==0.0)return 0;L[i*n+i]=1;for(size_t k=i+1;k<n;k++){double s=0;for(size_t j=0;j<i;j++)s+=L[k*n+j]*U[j*n+i];L[k*n+i]=(A[k*n+i]-s)/U[i*n+i];}}return 1;}
