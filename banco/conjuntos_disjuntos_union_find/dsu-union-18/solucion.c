#include "dsu-union-18.h"
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

static int lookup(const char *const n[],size_t count,const char *s){for(size_t i=0;
i<count;
i++)if(n[i]&&s&&strcmp(n[i],s)==0)return (int)i;
return -1;
}
int dsu18_contar_grupos(const char *const n[],size_t count,const char *const pairs[][2],size_t m)
{
 if(count>INT_MAX||(count&&!n)||(m&&!pairs))return -1;
int *p=count?malloc(count*sizeof *p):NULL,*s=count?malloc(count*sizeof *s):NULL;
if(count&&(!p||!s)){free(p);
free(s);
return -1;
}for(size_t i=0;
i<count;
i++){if(!n[i]){free(p);
free(s);
return -1;
}for(size_t j=0;
j<i;
j++)if(strcmp(n[i],n[j])==0){free(p);
free(s);
return -1;
}p[i]=(int)i;
s[i]=1;
}int groups=(int)count;

 for(size_t i=0;
i<m;
i++){int a=lookup(n,count,pairs[i][0]),b=lookup(n,count,pairs[i][1]);
if(a<0||b<0){free(p);
free(s);
return -1;
}if(join(p,s,a,b))groups--;
}
 free(p);
free(s);
return groups;

}
