#include "dsu-union-14.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int dsu14_es_bipartito(size_t n,const int e[][2],size_t m)
{
 if(n>INT_MAX||n>SIZE_MAX/sizeof(int)||(m&&!e))return -1;
for (size_t i = 0; i < m; ++i) {
    if (e[i][0] < 0 || e[i][1] < 0 || (size_t)e[i][0] >= n || (size_t)e[i][1] >= n) return -1;
}
int *p=n?malloc(n*sizeof *p):NULL,*sz=n?malloc(n*sizeof *sz):NULL,*xr=n?calloc(n,sizeof *xr):NULL;
if(n&&(!p||!sz||!xr)){free(p);
free(sz);
free(xr);
return -1;
}for(size_t i=0;
i<n;
i++){p[i]=(int)i;
sz[i]=1;
}
 for(size_t k=0;
k<m;
k++){int a=e[k][0],b=e[k][1];
int x=a,y=b,xa=0,xb=0;
while(p[x]!=x){xa^=xr[x];
x=p[x];
}while(p[y]!=y){xb^=xr[y];
y=p[y];
}if(x==y){if((xa^xb)!=1){free(p);
free(sz);
free(xr);
return 0;
}}else if(sz[x]>=sz[y]){p[y]=x;
xr[y]=xa^xb^1;
sz[x]+=sz[y];
}else{p[x]=y;
xr[x]=xa^xb^1;
sz[y]+=sz[x];
}}
 free(p);
free(sz);
free(xr);
return 1;

}
