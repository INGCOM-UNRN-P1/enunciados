#include "dsu-union-19.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
static int find_root(int *p,int x){if(p[x]!=x)p[x]=find_root(p,p[x]);
return p[x];
}
static int join(int *p,int *s,int a,int b){a=find_root(p,a);
b=find_root(p,b);
if(a==b)return 0;
if(s[a]<s[b]){int t=a;
a=b;
b=t;
}p[b]=a;
s[a]+=s[b];
return 1;
}

static int find_name(const char *const n[],size_t count,const char *s){if(s==NULL)return -1;for(size_t i=0;
i<count;
i++)if(strcmp(n[i],s)==0)return (int)i;
return -1;
}
int dsu19_mapear_y_agrupar(const char *const n[],size_t count,const char *const pairs[][2],size_t m,size_t indices[],int groups[])
{
 if(count>INT_MAX||(count&&(!n||!indices||!groups))||(m&&!pairs))return -1;
for(size_t i=0;
i<count;
i++)if(!n[i])return -1;
int *p=count?malloc(count*sizeof *p):NULL,*s=count?malloc(count*sizeof *s):NULL;
if(count&&(!p||!s)){free(p);
free(s);
return -1;
}for(size_t i=0;
i<count;
i++){p[i]=(int)i;
s[i]=1;
int ix=find_name(n,i,n[i]);
indices[i]=ix>=0?(size_t)ix:i;
if(ix>=0)join(p,s,(int)i,ix);
}
 for(size_t i=0;
i<m;
i++){int a=find_name(n,count,pairs[i][0]),b=find_name(n,count,pairs[i][1]);
if(a<0||b<0){free(p);
free(s);
return -1;
}join(p,s,a,b);
}for(size_t i=0;
i<count;
i++)groups[i]=find_root(p,(int)i);
free(p);
free(s);
return (int)count;

}
