#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-03.h"
static void down(int*a,size_t n,size_t i){for(;;){size_t m=i,l=i*2+1,r=l+1;if(l<n&&a[l]>a[m])m=l;if(r<n&&a[r]>a[m])m=r;if(m==i)return;int t=a[i];a[i]=a[m];a[m]=t;i=m;}}
void heapsort(int*a,size_t n){if(!a)return;for(size_t i=n/2;i>0;i--)down(a,n,i-1);for(size_t e=n;e>1;e--){int t=a[0];a[0]=a[e-1];a[e-1]=t;down(a,e-1,0);}}
