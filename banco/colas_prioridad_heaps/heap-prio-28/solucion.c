#include "heap-prio-28.h"
static size_t cr(const int*a,size_t n,size_t i,int lo,int hi){if(i>=n||a[i]>hi)return 0;return (a[i]>=lo)+cr(a,n,2*i+1,lo,hi)+cr(a,n,2*i+2,lo,hi);}
size_t min_heap_count_range(const int*a,size_t n,int lo,int hi){return !a||!n||lo>hi?0:cr(a,n,0,lo,hi);}
