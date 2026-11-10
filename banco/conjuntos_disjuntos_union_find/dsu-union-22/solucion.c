#include "dsu-union-22.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
static int find_root(int*p,int x){if(p[x]!=x)p[x]=find_root(p,p[x]);
return p[x];
}

int dsu22_procesar(size_t n,const int op[][4],size_t q,int out[])
{
 if(n>2000||q>2000||(q&&(!op||!out))||n>SIZE_MAX/(q+1)/sizeof(int))return -1;
size_t cells=(q+1)*n;
int *p=cells?malloc(cells*sizeof *p):NULL,*s=cells?malloc(cells*sizeof *s):NULL;
if(cells&&(!p||!s)){free(p);
free(s);
return -1;
}for(size_t j=0;
j<n;
j++){p[j]=(int)j;
s[j]=1;
}for(size_t i=0;
i<q;
i++){int base=op[i][0],type=op[i][1],a=op[i][2],b=op[i][3];
if(base<0||(size_t)base>i||(type!=0&&type!=1)||a<0||b<0||(size_t)a>=n||(size_t)b>=n){free(p);
free(s);
return -1;
}size_t dst=(i+1)*n,src=(size_t)base*n;
for(size_t j=0;
j<n;
j++){p[dst+j]=p[src+j];
s[dst+j]=s[src+j];
}int *pp=p+dst,*ss=s+dst;
int x=find_root(pp,a),y=find_root(pp,b);
out[i]=0;
if(type==0){if(x!=y){if(ss[x]<ss[y]){int t=x;
x=y;
y=t;
}pp[y]=x;
ss[x]+=ss[y];
}}else out[i]=x==y;
}free(p);
free(s);
return (int)q;

}
