#include "dsu-union-15.h"
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

int dsu15_primer_cruce(size_t f,size_t c,const size_t a[][2],size_t m)
{
 if(!f||!c||f>INT_MAX||c>INT_MAX||f>SIZE_MAX/c||f*c>INT_MAX-2||(m&&!a))return -1;
for(size_t k=0;k<m;k++)if(a[k][0]>=f||a[k][1]>=c)return -1;
size_t n=f*c;
int *p=malloc((n+2)*sizeof *p),*s=calloc(n+2,sizeof *s);
unsigned char *open=calloc(n,1);
if(!p||!s||!open){free(p);
free(s);
free(open);
return -1;
}for(size_t i=0;
i<n+2;
i++){p[i]=(int)i;
s[i]=1;
}int top=(int)n,bot=(int)n+1;
size_t abiertas=0;

 for(size_t k=0;
k<m;
k++){size_t r=a[k][0],col=a[k][1];
if(r>=f||col>=c){free(p);
free(s);
free(open);
return -1;
}size_t id=r*c+col;
if(open[id])continue;
open[id]=1;
++abiertas;
if(r==0)join(p,s,(int)id,top);
if(r+1==f)join(p,s,(int)id,bot);
if(r&&open[id-c])join(p,s,(int)id,(int)(id-c));
if(r+1<f&&open[id+c])join(p,s,(int)id,(int)(id+c));
if(col&&open[id-1])join(p,s,(int)id,(int)(id-1));
if(col+1<c&&open[id+1])join(p,s,(int)id,(int)(id+1));
if(find_root(p,top)==find_root(p,bot)){free(p);
free(s);
free(open);
return (int)abiertas;
}}
 free(p);
free(s);
free(open);
return 0;

}
