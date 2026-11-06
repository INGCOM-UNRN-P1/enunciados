#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-12.h"
static void upmax(int*a,size_t i){while(i&&a[(i-1)/2]<a[i]){int t=a[i];a[i]=a[(i-1)/2];a[(i-1)/2]=t;i=(i-1)/2;}}
static void upmin(int*a,size_t i){while(i&&a[(i-1)/2]>a[i]){int t=a[i];a[i]=a[(i-1)/2];a[(i-1)/2]=t;i=(i-1)/2;}}
void median_init(median_stream_t*s){if(s){s->n_inferiores=0;s->n_superiores=0;}}
bool median_add(median_stream_t*s,int v){if(!s||s->n_inferiores+s->n_superiores>=HEAP_CAPACITY)return false;if(!s->n_inferiores||v<=s->inferiores[0]){size_t i=s->n_inferiores++;s->inferiores[i]=v;upmax(s->inferiores,i);}else{size_t i=s->n_superiores++;s->superiores[i]=v;upmin(s->superiores,i);}if(s->n_inferiores>s->n_superiores+1){int x=s->inferiores[0];s->inferiores[0]=s->inferiores[--s->n_inferiores];size_t i=0;while(i*2+1<s->n_inferiores){size_t c=i*2+1;if(c+1<s->n_inferiores&&s->inferiores[c+1]>s->inferiores[c])c++;if(s->inferiores[c]<=s->inferiores[i])break;int t=s->inferiores[i];s->inferiores[i]=s->inferiores[c];s->inferiores[c]=t;i=c;}size_t j=s->n_superiores++;s->superiores[j]=x;upmin(s->superiores,j);}else if(s->n_superiores>s->n_inferiores){int x=s->superiores[0];s->superiores[0]=s->superiores[--s->n_superiores];size_t i=0;while(i*2+1<s->n_superiores){size_t c=i*2+1;if(c+1<s->n_superiores&&s->superiores[c+1]<s->superiores[c])c++;if(s->superiores[c]>=s->superiores[i])break;int t=s->superiores[i];s->superiores[i]=s->superiores[c];s->superiores[c]=t;i=c;}size_t j=s->n_inferiores++;s->inferiores[j]=x;upmax(s->inferiores,j);}return true;}
bool median_get(const median_stream_t*s,double*m){if(!s||!m||!s->n_inferiores)return false;*m=s->n_inferiores==s->n_superiores?((double)s->inferiores[0]+s->superiores[0])/2.0:s->inferiores[0];return true;}
