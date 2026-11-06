#include "trie-pref-14.h"
#include <stdlib.h>
#include <string.h>
typedef struct sort_value {char *s;struct sort_value *next;} sort_value_t;
typedef struct sort_node {struct sort_node *h[256];sort_value_t *primero,*ultimo;} sort_node_t;
static void sf(sort_node_t *n){if(!n)return;for(size_t i=0;i<256;i++)sf(n->h[i]);sort_value_t *v=n->primero;while(v){sort_value_t *q=v->next;free(v);v=q;}free(n);}
static bool si(sort_node_t *n,const unsigned char *s,char *original){if(!*s){sort_value_t *v=malloc(sizeof *v);if(!v)return false;v->s=original;v->next=NULL;if(n->ultimo)n->ultimo->next=v;else n->primero=v;n->ultimo=v;return true;}unsigned c=*s;if(!n->h[c]){n->h[c]=calloc(1,sizeof(sort_node_t));if(!n->h[c])return false;}return si(n->h[c],s+1,original);}
static void se(sort_node_t *n,char **out,size_t *k){for(sort_value_t *v=n->primero;v;v=v->next)out[(*k)++]=v->s;for(size_t i=0;i<256;i++)if(n->h[i])se(n->h[i],out,k);}
bool trie_ordenar(char *v[],size_t n){if(!v&&n)return false;sort_node_t *r=calloc(1,sizeof *r);if(!r)return false;for(size_t i=0;i<n;i++)if(!v[i]||!si(r,(const unsigned char*)v[i],v[i])){sf(r);return false;}char **tmp=n?malloc(n*sizeof *tmp):NULL;if(n&&!tmp){sf(r);return false;}size_t k=0;se(r,tmp,&k);if(k!=n){free(tmp);sf(r);return false;}if(n)memcpy(v,tmp,n*sizeof *v);free(tmp);sf(r);return true;}
