#include "heap-prio-25.h"
bool is_min_heap(const int*a,size_t n){if(n&&!a)return false;for(size_t j=1;j<n;j++)if(a[(j-1)/2]>a[j])return false;return true;}
bool is_max_heap(const int*a,size_t n){if(n&&!a)return false;for(size_t j=1;j<n;j++)if(a[(j-1)/2]<a[j])return false;return true;}
