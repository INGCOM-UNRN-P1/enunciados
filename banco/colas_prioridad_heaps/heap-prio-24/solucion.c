#include "heap-prio-24.h"
#include <stdlib.h>
static bool minlevel(size_t i){size_t d=0;for(size_t x=i+1;x>1;x/=2)d++;return (d%2)==0;}
static void swap(int*a,size_t i,size_t j){int t=a[i];a[i]=a[j];a[j]=t;}
static void up_min(int*a,size_t i){while(i>=3){size_t g=(i-3)/4;if(a[i]>=a[g])break;swap(a,i,g);i=g;}}
static void up_max(int*a,size_t i){while(i>=3){size_t g=(i-3)/4;if(a[i]<=a[g])break;swap(a,i,g);i=g;}}
static void up(int*a,size_t i){if(!i)return;size_t p=(i-1)/2;if(minlevel(i)){if(a[i]>a[p]){swap(a,i,p);up_max(a,p);}else up_min(a,i);}else{if(a[i]<a[p]){swap(a,i,p);up_min(a,p);}else up_max(a,i);}}
static size_t extreme(int*a,size_t n,size_t i,bool mn){size_t best=SIZE_MAX;size_t children[2]={2*i+1,2*i+2};for(size_t k=0;k<2;k++){size_t c=children[k];if(c<n&&((mn&&a[c]<a[i])||(!mn&&a[c]>a[i]))&&(best==SIZE_MAX||(mn?a[c]<a[best]:a[c]>a[best])))best=c;for(size_t q=0;q<2;q++){size_t g=2*c+1+q;if(g<n&&((mn&&a[g]<a[i])||(!mn&&a[g]>a[i]))&&(best==SIZE_MAX||(mn?a[g]<a[best]:a[g]>a[best])))best=g;}}return best;}
static void down(int*a,size_t n,size_t i){bool mn=minlevel(i);for(;;){size_t m=extreme(a,n,i,mn);if(m==SIZE_MAX)break;bool g=m>=4*i+3;if((mn&&a[m]>=a[i])||(!mn&&a[m]<=a[i]))break;swap(a,i,m);if(g){size_t p=(m-1)/2;if((mn&&a[m]>a[p])||(!mn&&a[m]<a[p]))swap(a,m,p);i=m;}else break;}}
void minmax_init(minmax_heap_t*h){if(h){h->a=NULL;h->n=h->cap=0;}}
bool minmax_insert(minmax_heap_t*h,int v){if(!h)return false;if(h->n==h->cap){size_t c=h->cap?h->cap*2:8;if(c<h->cap||c>SIZE_MAX/sizeof(int))return false;int*p=realloc(h->a,c*sizeof(*p));if(!p)return false;h->a=p;h->cap=c;}h->a[h->n]=v;up(h->a,h->n++);return true;}
bool minmax_min(const minmax_heap_t*h,int*out){if(!h||!h->n||!out)return false;*out=h->a[0];return true;}
bool minmax_max(const minmax_heap_t*h,int*out){if(!h||!h->n||!out)return false;*out=h->a[h->n==1?0:h->n==2?1:(h->a[1]>h->a[2]?1:2)];return true;}
static bool remove_at(minmax_heap_t*h,size_t i,int*out){if(!h||!h->n||!out)return false;*out=h->a[i];size_t last=--h->n;if(i!=last){h->a[i]=h->a[last];if(i&&((minlevel(i)&&h->a[i]>h->a[(i-1)/2])||(!minlevel(i)&&h->a[i]<h->a[(i-1)/2])))up(h->a,i);else down(h->a,h->n,i);}return true;}
bool minmax_pop_min(minmax_heap_t*h,int*out){return remove_at(h,0,out);}
bool minmax_pop_max(minmax_heap_t*h,int*out){if(!h||!h->n)return false;size_t i=h->n==1?0:h->n==2?1:(h->a[1]>h->a[2]?1:2);return remove_at(h,i,out);}
bool minmax_valid(const minmax_heap_t*h){if(!h||(h->n&&!h->a))return false;for(size_t i=0;i<h->n;i++){size_t c=2*i+1;for(size_t j=c;j<h->n&&j<=c+1;j++){if(minlevel(i)?h->a[i]>h->a[j]:h->a[i]<h->a[j])return false;}size_t g=4*i+3;for(size_t j=g;j<h->n&&j<=g+3;j++){if(minlevel(i)?h->a[i]>h->a[j]:h->a[i]<h->a[j])return false;}}return true;}
void minmax_destroy(minmax_heap_t*h){if(h){free(h->a);h->a=NULL;h->n=h->cap=0;}}
