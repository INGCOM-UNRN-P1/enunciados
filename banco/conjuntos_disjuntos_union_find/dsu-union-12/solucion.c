#include "dsu-union-12.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct { int child, root, old_size;
 } cambio_t;

int dsu12_procesar(size_t n,const int op[][3],size_t q,int out[])
{
 if(n>INT_MAX||q>INT_MAX||n>SIZE_MAX/sizeof(int)||(q&&(!op||!out))||q>SIZE_MAX/sizeof(cambio_t)||q>SIZE_MAX/sizeof(size_t))return -1;

 int *p=n?malloc(n*sizeof *p):NULL,*s=n?malloc(n*sizeof *s):NULL;
cambio_t *h=q?malloc(q*sizeof *h):NULL;
size_t *snap=q?malloc(q*sizeof *snap):NULL;
if((n&&(!p||!s))||(q&&(!h||!snap))){free(p);
free(s);
free(h);
free(snap);
return -1;
}
 for(size_t i=0;
i<n;
i++){p[i]=(int)i;
s[i]=1;
}size_t nh=0,ns=0;

 for(size_t i=0;
i<q;
i++){int t=op[i][0],a=op[i][1],b=op[i][2];
out[i]=0;
if(t==0||t==3){if(a<0||b<0||(size_t)a>=n||(size_t)b>=n){free(p);
free(s);
free(h);
free(snap);
return -1;
}int x=a,y=b;
while(p[x]!=x)x=p[x];
while(p[y]!=y)y=p[y];
if(t==3)out[i]=(x==y);
else if(x!=y){if(s[x]<s[y]){int z=x;
x=y;
y=z;
}h[nh++]=(cambio_t){y,x,s[x]};
p[y]=x;
s[x]+=s[y];
}}
 else if(t==1){snap[ns++]=nh;
}else if(t==2){if(ns==0){free(p);
free(s);
free(h);
free(snap);
return -1;
}size_t target=snap[--ns];
while(nh>target){cambio_t c=h[--nh];
p[c.child]=c.child;
s[c.root]=c.old_size;
}}else{free(p);
free(s);
free(h);
free(snap);
return -1;
}}
 free(p);
free(s);
free(h);
free(snap);
return (int)q;

}
