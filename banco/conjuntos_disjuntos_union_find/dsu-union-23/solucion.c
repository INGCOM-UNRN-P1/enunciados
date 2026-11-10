#include "dsu-union-23.h"
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

int dsu23_consultar(size_t n,const int rel[][2],size_t m,const int q[][2],size_t nq,int out[])
{
 if(n>INT_MAX||nq>INT_MAX||n>SIZE_MAX/sizeof(int)||(m&&!rel)||(nq&&(!q||!out)))return -1;
int *p=n?malloc(n*sizeof *p):NULL,*s=n?malloc(n*sizeof *s):NULL;
if(n&&(!p||!s)){free(p);
free(s);
return -1;
}for(size_t i=0;
i<n;
i++){p[i]=(int)i;
s[i]=1;
}for(size_t i=0;
i<m;
i++){int a=rel[i][0],b=rel[i][1];
if(a<0||b<0||(size_t)a>=n||(size_t)b>=n){free(p);
free(s);
return -1;
}join(p,s,a,b);
}for(size_t i=0;
i<nq;
i++){int a=q[i][0],b=q[i][1];
if(a<0||b<0||(size_t)a>=n||(size_t)b>=n){free(p);
free(s);
return -1;
}out[i]=find_root(p,a)==find_root(p,b);
}free(p);
free(s);
return (int)nq;

}
