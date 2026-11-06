#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-05.h"
bool es_min_heap(const int*a,size_t n){if(!a&&n)return false;for(size_t i=1;i<n;i++)if(a[(i-1)/2]>a[i])return false;return true;}
bool min_heap_decrease_key(int*a,size_t n,size_t i,int v){if(!a||i>=n||v > a[i])return false;a[i]=v;while(i&&a[(i-1)/2]>a[i]){int t=a[i];a[i]=a[(i-1)/2];a[(i-1)/2]=t;i=(i-1)/2;}return true;}
