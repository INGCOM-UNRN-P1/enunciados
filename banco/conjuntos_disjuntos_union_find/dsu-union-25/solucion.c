#include "dsu-union-25.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
typedef struct { const char *email; size_t account; } email_ref_t;
static int compare_email(const void *a,const void *b){const email_ref_t *x=a,*y=b;return strcmp(x->email,y->email);}
static size_t find_root(size_t *p,size_t x){while(p[x]!=x){p[x]=p[p[x]];x=p[x];}return x;}
static void join(size_t *p,size_t *sz,size_t a,size_t b){a=find_root(p,a);b=find_root(p,b);if(a==b)return;if(sz[a]<sz[b]){size_t t=a;a=b;b=t;}p[b]=a;sz[a]+=sz[b];}
bool dsu_merge_accounts(const dsu_account_t *a,size_t n,size_t **groups){if(!groups)return false;*groups=NULL;if(n==0)return true;if(!a||n>SIZE_MAX/sizeof(size_t))return false;size_t ec=0;for(size_t i=0;i<n;i++){if(!a[i].name||(a[i].email_count&&!a[i].emails)||a[i].email_count>SIZE_MAX-ec)return false;ec+=a[i].email_count;}if(ec>SIZE_MAX/sizeof(email_ref_t))return false;size_t *p=malloc(n*sizeof(*p)),*sz=malloc(n*sizeof(*sz)),*out=malloc(n*sizeof(*out));email_ref_t *e=ec?malloc(ec*sizeof(*e)):NULL;if(!p||!sz||!out||(ec&&!e)){free(p);free(sz);free(out);free(e);return false;}size_t k=0;for(size_t i=0;i<n;i++){p[i]=i;sz[i]=1;for(size_t j=0;j<a[i].email_count;j++){if(!a[i].emails[j]){free(p);free(sz);free(out);free(e);return false;}e[k++]=(email_ref_t){a[i].emails[j],i};}}if(ec>1)qsort(e,ec,sizeof(*e),compare_email);for(size_t i=1;i<ec;i++)if(strcmp(e[i-1].email,e[i].email)==0)join(p,sz,e[i-1].account,e[i].account);for(size_t i=0;i<n;i++)out[i]=find_root(p,i);free(p);free(sz);free(e);*groups=out;return true;}
