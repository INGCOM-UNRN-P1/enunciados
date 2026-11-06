#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-09.h"
static void down(int*a,size_t n,size_t i){for(;;){size_t m=i,l=i*2+1,r=l+1;if(l<n&&a[l]<a[m])m=l;if(r<n&&a[r]<a[m])m=r;if(m==i)return;int t=a[i];a[i]=a[m];a[m]=t;i=m;}}
bool es_min_heap(const int*a,size_t n){if(!a&&n)return false;for(size_t i=1;i<n;i++)if(a[(i-1)/2]>a[i])return false;return true;}
bool heap_merge(const int*a,size_t n,const int*b,size_t m,int*d){if((!a&&n)||(!b&&m)||(!d&&n+m)||n+m>HEAP_CAPACITY)return false;for(size_t i=0;i<n;i++)d[i]=a[i];for(size_t i=0;i<m;i++)d[n+i]=b[i];for(size_t i=(n+m)/2;i>0;i--)down(d,n+m,i-1);return true;}
