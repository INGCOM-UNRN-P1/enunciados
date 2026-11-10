#include "trie-pref-26.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
typedef struct edge {unsigned char c;trie_texto_nodo_t *n;struct edge *next;} edge_t;
struct trie_texto_nodo {edge_t *edges;size_t *pos;size_t count,cap;bool terminal;};
static bool espacio(unsigned char c){return c==' '||c=='\t'||c=='\n'||c=='\r'||c=='\v'||c=='\f';}
static trie_texto_nodo_t *node(void){return calloc(1,sizeof(trie_texto_nodo_t));}
static trie_texto_nodo_t *child(trie_texto_nodo_t *n,unsigned char c,bool create){for(edge_t *e=n->edges;e;e=e->next)if(e->c==c)return e->n;if(!create)return NULL;edge_t *e=malloc(sizeof(*e));trie_texto_nodo_t *v=node();if(!e||!v){free(e);free(v);return NULL;}*e=(edge_t){c,v,n->edges};n->edges=e;return v;}
static void destroy_node(trie_texto_nodo_t *n){if(!n)return;edge_t *e=n->edges;while(e){edge_t *q=e->next;destroy_node(e->n);free(e);e=q;}free(n->pos);free(n);}
static bool addpos(trie_texto_nodo_t *n,size_t p){if(n->count==n->cap){size_t nc=n->cap?n->cap*2:4;if(nc<n->cap||nc>SIZE_MAX/sizeof(size_t))return false;void *q=realloc(n->pos,nc*sizeof(size_t));if(!q)return false;n->pos=q;n->cap=nc;}n->pos[n->count++]=p;return true;}
bool trie_texto_indexar(trie_texto_indice_t *idx,const char *s){if(!idx)return false;idx->raiz=NULL;if(!s)return false;trie_texto_nodo_t *r=node();if(!r)return false;size_t i=0,n=strlen(s);while(i<n){while(i<n&&espacio((unsigned char)s[i]))i++;size_t start=i;while(i<n&&!espacio((unsigned char)s[i]))i++;if(i==start)continue;if(i-start>255){destroy_node(r);return false;}trie_texto_nodo_t *v=r;for(size_t k=start;k<i;k++){v=child(v,(unsigned char)s[k],true);if(!v){destroy_node(r);return false;}}v->terminal=true;if(!addpos(v,start)){destroy_node(r);return false;}}idx->raiz=r;return true;}
size_t trie_texto_buscar(const trie_texto_indice_t *idx,const char *w,size_t *out,size_t cap){if(!idx||!idx->raiz||!w||!*w)return 0;trie_texto_nodo_t *v=idx->raiz;for(const unsigned char *p=(const unsigned char*)w;*p;p++){v=child(v,*p,false);if(!v)return 0;}if(!v->terminal)return 0;size_t n=v->count<cap?v->count:cap;if(n&&!out)return 0;for(size_t i=0;i<n;i++)out[i]=v->pos[i];return n;}
void trie_texto_destruir(trie_texto_indice_t *idx){if(idx){destroy_node(idx->raiz);idx->raiz=NULL;}}
