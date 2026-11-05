#include "ej-14-29-sub-arreglo-dinamico.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int*copiar_subarreglo(const int*a,size_t n,size_t i,size_t k){if((!a&&n)||i>n||k>n-i||!k||k>SIZE_MAX/sizeof(int))return NULL;int*r=malloc(k*sizeof *r);if(r)memcpy(r,a+i,k*sizeof *r);return r;}
