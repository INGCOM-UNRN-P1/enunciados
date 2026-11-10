#include "trie-pref-29.h"
#include "../trie-pref-04/trie-pref-common.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
typedef struct item {char *s;struct item *next;} item_t;
typedef struct bst {char *s;struct bst *l,*r;} bst_t;
static char *dup(const char *s){size_t n=strlen(s)+1;char *p=malloc(n);if(p)memcpy(p,s,n);return p;}
static void bst_free(bst_t *n){if(n){bst_free(n->l);bst_free(n->r);free(n->s);free(n);}}
bool trie_comparar_estructuras(const char *const w[],size_t n,trie_benchmark_t *out){if(!out||(!w&&n))return false;*out=(trie_benchmark_t){0};if(n>(SIZE_MAX-1)/2)return false;size_t buckets=n?2*n+1:1;item_t **h=calloc(buckets,sizeof(*h));if(!h)return false;bst_t *root=NULL;trie_nodo_t *tr=tp_nuevo();if(!tr){free(h);return false;}bool ok=true;for(size_t i=0;i<n&&ok;i++){if(!w[i]||strlen(w[i])>255){ok=false;break;}for(const unsigned char *p=(const unsigned char*)w[i];*p;p++)out->trie_bytes++;if(!tp_insertar(tr,w[i])){ok=false;break;}unsigned long hv=5381;for(const unsigned char *p=(const unsigned char*)w[i];*p;p++)hv=hv*33u+*p;size_t k=(size_t)(hv%buckets);item_t *e=h[k];while(e){out->hash_comparaciones++;if(strcmp(e->s,w[i])==0)break;e=e->next;}if(!e){e=malloc(sizeof(*e));if(!e){ok=false;break;}e->s=dup(w[i]);if(!e->s){free(e);ok=false;break;}e->next=h[k];h[k]=e;}bst_t **slot=&root;while(*slot){out->bst_comparaciones++;int c=strcmp(w[i],(*slot)->s);if(!c)break;slot=c<0?&(*slot)->l:&(*slot)->r;}if(!*slot){*slot=calloc(1,sizeof(**slot));if(!*slot){ok=false;break;}(*slot)->s=dup(w[i]);if(!(*slot)->s){free(*slot);*slot=NULL;ok=false;break;}}}for(size_t i=0;i<buckets;i++){item_t *e=h[i];while(e){item_t *q=e->next;free(e->s);free(e);e=q;}}free(h);bst_free(root);tp_destruir(tr);return ok;}
