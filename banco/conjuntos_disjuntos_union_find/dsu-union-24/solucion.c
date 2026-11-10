#include "dsu-union-24.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
static int find_root(int*p,int x){if(p[x]!=x)p[x]=find_root(p,p[x]);
return p[x];
}
static int join(int*p,int*s,int a,int b){a=find_root(p,a);
b=find_root(p,b);
if(a==b)return 0;
if(s[a]<s[b]){int t=a;
a=b;
b=t;
}p[b]=a;
s[a]+=s[b];
return 1;
}

typedef struct{int a,b,w;size_t order;
}edge_t;
static int cmp_edge(const void *x,const void *y){const edge_t*a=x,*b=y;
if(a->w!=b->w) return (a->w>b->w)-(a->w<b->w);
return (a->order>b->order)-(a->order<b->order);
}
int dsu24_umbral(size_t n,const int in[][3],size_t m,size_t k,int *out)
{
 if(!out||!n||n>INT_MAX||n>SIZE_MAX/sizeof(int)||k==0||k>n||(m&&!in)||m>SIZE_MAX/sizeof(edge_t))return -1;
edge_t *e=m?malloc(m*sizeof *e):NULL;
int*p=malloc(n*sizeof *p),*s=malloc(n*sizeof *s);
if((m&&!e)||!p||!s){free(e);
free(p);
free(s);
return -1;
}for(size_t i=0;
i<n;
i++){p[i]=(int)i;
s[i]=1;
}for(size_t i=0;
i<m;
i++){if(in[i][0]<0||in[i][1]<0||(size_t)in[i][0]>=n||(size_t)in[i][1]>=n||in[i][2]<0){free(e);
free(p);
free(s);
return -1;
}e[i]=(edge_t){in[i][0],in[i][1],in[i][2],i};
}if(m>1)qsort(e,m,sizeof *e,cmp_edge);
size_t components=n;
*out=0;
for(size_t i=0;
i<m&&components>k;
i++)if(join(p,s,e[i].a,e[i].b)){components--;
*out=e[i].w;
}free(e);
free(p);
free(s);
return components==k?0:-1;

}
