#include "trie-pref-30.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
typedef struct pred_nodo pred_nodo_t;
typedef struct pred_edge {unsigned char c;pred_nodo_t *n;struct pred_edge *next;} pred_edge_t;
struct pred_nodo {pred_edge_t *edges;char *word;size_t freq;};
typedef struct {const pred_nodo_t *n;} cand_t;
static pred_nodo_t *nuevo(void){return calloc(1,sizeof(pred_nodo_t));}
static char *dupstr(const char *s){size_t n=strlen(s)+1;char *p=malloc(n);if(p)memcpy(p,s,n);return p;}
static pred_nodo_t *hijo(pred_nodo_t *n,unsigned char c,bool crear){for(pred_edge_t *e=n->edges;e;e=e->next)if(e->c==c)return e->n;if(!crear)return NULL;pred_nodo_t *v=nuevo();pred_edge_t *e=malloc(sizeof(*e));if(!v||!e){free(v);free(e);return NULL;}*e=(pred_edge_t){c,v,n->edges};n->edges=e;return v;}
static void destruir(pred_nodo_t *n){if(!n)return;pred_edge_t *e=n->edges;while(e){pred_edge_t *q=e->next;destruir(e->n);free(e);e=q;}free(n->word);free(n);}
static int antes(const pred_nodo_t *a,const pred_nodo_t *b){return a->freq>b->freq||(a->freq==b->freq&&strcmp(a->word,b->word)<0);}
static void agregar_top(const pred_nodo_t *n,cand_t *top,size_t *count,size_t limit){if(!n->word||!limit)return;size_t i=0;while(i<*count&&!antes(n,top[i].n))i++;if(i>=limit)return;size_t end=*count<limit?(*count)++:limit-1;while(end>i){top[end]=top[end-1];end--;}top[i].n=n;}
static void recorrer(const pred_nodo_t *n,cand_t *top,size_t *count,size_t limit){if(!n)return;agregar_top(n,top,count,limit);for(const pred_edge_t *e=n->edges;e;e=e->next)recorrer(e->n,top,count,limit);}
size_t trie_predecir(const char *const w[],const size_t f[],size_t n,const char *p,size_t k,char out[][256],size_t cap){if(!p||(!w&&n)||(!f&&n)||(!out&&k)||!k||!cap)return 0;pred_nodo_t *root=nuevo();if(!root)return 0;for(size_t i=0;i<n;i++){if(!w[i]||!*w[i]||strlen(w[i])>255){destruir(root);return 0;}pred_nodo_t *v=root;for(const unsigned char *c=(const unsigned char*)w[i];*c;c++){v=hijo(v,*c,true);if(!v){destruir(root);return 0;}}if(v->word){destruir(root);return 0;}v->word=dupstr(w[i]);if(!v->word){destruir(root);return 0;}v->freq=f[i];}pred_nodo_t *start=root;for(const unsigned char *c=(const unsigned char*)p;*c;c++){start=hijo(start,*c,false);if(!start){destruir(root);return 0;}}size_t limit=k<cap?k:cap;if(limit>n)limit=n;if(limit>SIZE_MAX/sizeof(cand_t)){destruir(root);return 0;}cand_t *top=limit?malloc(limit*sizeof(*top)):NULL;if(limit&&!top){destruir(root);return 0;}size_t count=0;recorrer(start,top,&count,limit);for(size_t i=0;i<count;i++)memcpy(out[i],top[i].n->word,strlen(top[i].n->word)+1);free(top);destruir(root);return count;}
