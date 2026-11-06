#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-08.h"
static void down(int*a,size_t n,size_t i){for(;;){size_t m=i,l=i*2+1,r=l+1;if(l<n&&a[l]<a[m])m=l;if(r<n&&a[r]<a[m])m=r;if(m==i)return;int t=a[i];a[i]=a[m];a[m]=t;i=m;}}
bool es_min_heap(const int*a,size_t n){if(!a&&n)return false;for(size_t i=1;i<n;i++)if(a[(i-1)/2]>a[i])return false;return true;}
bool heap_remove_at(int*a,size_t*n,size_t i){if(!a||!n||i>=*n)return false;size_t z=--*n;if(i==z)return true;a[i]=a[z];if(i&&a[i]<a[(i-1)/2]){while(i&&a[i]<a[(i-1)/2]){int t=a[i];a[i]=a[(i-1)/2];a[(i-1)/2]=t;i=(i-1)/2;}}else down(a,*n,i);return true;}
