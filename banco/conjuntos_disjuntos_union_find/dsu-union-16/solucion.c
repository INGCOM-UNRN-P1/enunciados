#include "dsu-union-16.h"
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

int dsu16_contar_islas(size_t f,size_t c,const int a[][100])
{
 if(f>100||c>100||(f&&c&&!a))return -1;
size_t n=f*c;
int *p=n?malloc(n*sizeof *p):NULL,*s=n?malloc(n*sizeof *s):NULL;
if(n&&(!p||!s)){free(p);
free(s);
return -1;
}int count=0;
for(size_t i=0;
i<n;
i++){p[i]=(int)i;
s[i]=1;
if(a[i/c][i%c]!=0&&a[i/c][i%c]!=1){free(p);
free(s);
return -1;
}if(a[i/c][i%c])count++;
}
 for(size_t r=0;
r<f;
r++)for(size_t col=0;
col<c;
col++)if(a[r][col]){size_t id=r*c+col;
if(r&&a[r-1][col]&&join(p,s,(int)id,(int)(id-c)))count--;
if(col&&a[r][col-1]&&join(p,s,(int)id,(int)(id-1)))count--;
}
 free(p);
free(s);
return count;

}
