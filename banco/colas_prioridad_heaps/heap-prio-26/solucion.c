#include "heap-prio-26.h"
static void dm(int*a,size_t n,size_t i){for(;;){size_t m=i,l=2*i+1,r=l+1;if(l<n&&a[l]<a[m])m=l;if(r<n&&a[r]<a[m])m=r;if(m==i)break;int t=a[i];a[i]=a[m];a[m]=t;i=m;}}
bool max_heap_to_min_heap(int*a,size_t n){if(n&&!a)return false;for(size_t j=n/2;j>0;j--)dm(a,n,j-1);return true;}
bool is_min_heap(const int*a,size_t n){if(n&&!a)return false;for(size_t j=1;j<n;j++)if(a[(j-1)/2]>a[j])return false;return true;}
