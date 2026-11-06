#include "heap-prio-30.h"
#include <stdlib.h>
#include <string.h>
int generic_int_compare(const void*a,const void*b){if(!a||!b)return 0;int x=*(const int*)a,y=*(const int*)b;return (x>y)-(x<y);}
bool generic_heap_init(generic_heap_t*h,size_t w,heap_compare_fn c){if(!h||!w||!c)return false;h->data=NULL;h->n=h->cap=0;h->width=w;h->cmp=c;return true;}
static void swap_bytes(unsigned char*a,unsigned char*b,size_t w){for(size_t i=0;i<w;i++){unsigned char t=a[i];a[i]=b[i];b[i]=t;}}
bool generic_heap_push(generic_heap_t*h,const void*x){if(!h||!h->cmp||!x)return false;if(h->n==h->cap){size_t c=h->cap?h->cap*2:8;if(c<h->cap||c>SIZE_MAX/h->width)return false;void*p=realloc(h->data,c*h->width);if(!p)return false;h->data=p;h->cap=c;}size_t i=h->n++;memcpy(h->data+i*h->width,x,h->width);while(i){size_t p=(i-1)/2;if(h->cmp(h->data+i*h->width,h->data+p*h->width)>=0)break;swap_bytes(h->data+i*h->width,h->data+p*h->width,h->width);i=p;}return true;}
bool generic_heap_peek(const generic_heap_t*h,void*out){if(!h||!h->n||!out)return false;memcpy(out,h->data,h->width);return true;}
bool generic_heap_pop(generic_heap_t*h,void*out){if(!h||!h->n||!out)return false;memcpy(out,h->data,h->width);h->n--;if(h->n){memcpy(h->data,h->data+h->n*h->width,h->width);size_t i=0;for(;;){size_t m=i,l=2*i+1,r=l+1;if(l<h->n&&h->cmp(h->data+l*h->width,h->data+m*h->width)<0)m=l;if(r<h->n&&h->cmp(h->data+r*h->width,h->data+m*h->width)<0)m=r;if(m==i)break;swap_bytes(h->data+i*h->width,h->data+m*h->width,h->width);i=m;}}return true;}
void generic_heap_destroy(generic_heap_t*h){if(h){free(h->data);h->data=NULL;h->n=h->cap=h->width=0;h->cmp=NULL;}}
