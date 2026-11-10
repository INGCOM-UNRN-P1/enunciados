#include "dsu-union-11.h"
static int find_root(int *p,int x){if(p[x]!=x)p[x]=find_root(p,p[x]);return p[x];}
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int dsu11_procesar(size_t n,const int op[][3],size_t q,int out[])
{
 if(n>INT_MAX||q>INT_MAX||n>SIZE_MAX/sizeof(int)||(q&&(!op||!out)))return -1;
int *p=n?malloc(n*sizeof *p):NULL,*s=n?malloc(n*sizeof *s):NULL;
if(n&&(!p||!s)){free(p);
free(s);
return -1;
}for(size_t i=0;
i<n;
i++){p[i]=(int)i;
s[i]=1;
}
 for(size_t i=0;
i<q;
i++){int t=op[i][0],a=op[i][1],b=op[i][2];
if((t!=0&&t!=1)||a<0||b<0||(size_t)a>=n||(size_t)b>=n){free(p);
free(s);
return -1;
}int x=find_root(p,a),y=find_root(p,b);
out[i]=0;
if(t==1)out[i]=x==y;
else if(x!=y){if(s[x]<s[y]){int z=x;
x=y;
y=z;
}p[y]=x;
s[x]+=s[y];
}}
 free(p);
free(s);
return (int)q;

}
