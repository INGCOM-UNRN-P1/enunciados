#include "dsu-union-17.h"
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

int dsu17_contar_regiones(size_t f,size_t c,const int px[],int tol)
{
 if(!f||!c||f>INT_MAX||c>INT_MAX||f>SIZE_MAX/c||f*c>INT_MAX||!px||tol<0)return -1;
size_t n=f*c;
int *p=malloc(n*sizeof *p),*s=malloc(n*sizeof *s);
if(!p||!s){free(p);
free(s);
return -1;
}for(size_t i=0;
i<n;
i++){if(px[i]<0||px[i]>255){free(p);
free(s);
return -1;
}p[i]=(int)i;
s[i]=1;
}int regions=(int)n;
for(size_t r=0;
r<f;
r++)for(size_t col=0;
col<c;
col++){size_t id=r*c+col;
if(col&&abs(px[id]-px[id-1])<=tol&&join(p,s,(int)id,(int)(id-1)))regions--;
if(r&&abs(px[id]-px[id-c])<=tol&&join(p,s,(int)id,(int)(id-c)))regions--;
}
 free(p);
free(s);
return regions;

}
