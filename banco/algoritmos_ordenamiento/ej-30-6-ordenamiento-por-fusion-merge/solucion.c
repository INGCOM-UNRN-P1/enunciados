#include "ej-30-6-ordenamiento-por-fusion-merge.h"
#include <stdlib.h>
#include <stdint.h>
static void merge(int*a,int*t,size_t lo,size_t mid,size_t hi){size_t i=lo,j=mid,k=lo;while(i<mid&&j<hi)t[k++]=a[i]<=a[j]?a[i++]:a[j++];while(i<mid)t[k++]=a[i++];while(j<hi)t[k++]=a[j++];for(i=lo;i<hi;i++)a[i]=t[i];}
static void msort(int*a,int*t,size_t lo,size_t hi){if(hi-lo<2)return;size_t mid=lo+(hi-lo)/2;msort(a,t,lo,mid);msort(a,t,mid,hi);merge(a,t,lo,mid,hi);}
bool ordenar_fusion(int*a,size_t n){if(!a&&n)return false;if(n<2)return true;if(n>SIZE_MAX/sizeof(int))return false;int*t=malloc(n*sizeof *t);if(!t)return false;msort(a,t,0,n);free(t);return true;}
