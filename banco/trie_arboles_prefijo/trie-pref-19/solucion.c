#include "trie-pref-19.h"
static bool tam_node(const nodo_trie_t *n,size_t *z){if(!n||n->cantidad>256)return false;size_t t=3;for(size_t i=0;i<n->cantidad;i++){size_t q=0;if(!tam_node(n->hijos[i].nodo,&q)||SIZE_MAX-t<1+q)return false;t+=1+q;}*z=t;return true;}
static void enc(const nodo_trie_t *n,unsigned char **p){*(*p)++=n->terminal?1:0;*(*p)++=(unsigned char)n->cantidad;*(*p)++=(unsigned char)(n->cantidad>>8);for(size_t i=0;i<n->cantidad;i++){*(*p)++=n->hijos[i].byte;enc(n->hijos[i].nodo,p);}}
bool trie_serializar(const nodo_trie_t *r,unsigned char **out,size_t *len){if(!r||!out||!len)return false;*out=NULL;*len=0;size_t z;if(!tam_node(r,&z)||z>SIZE_MAX-4)return false;unsigned char *b=malloc(z+4);if(!b)return false;memcpy(b,"TRP1",4);unsigned char *p=b+4;enc(r,&p);*out=b;*len=z+4;return true;}
static nodo_trie_t *dec(const unsigned char **p,const unsigned char *end,bool *ok){if((size_t)(end-*p)<3){*ok=false;return NULL;}unsigned term=*(*p)++,c=*(*p)++,d=*(*p)++;size_t n=c|(d<<8);if(term>1||n>256){*ok=false;return NULL;}nodo_trie_t *r=tp_nuevo();if(!r){*ok=false;return NULL;}r->terminal=term!=0;if(n){r->hijos=calloc(n,sizeof(*r->hijos));if(!r->hijos){free(r);*ok=false;return NULL;}r->capacidad=n;}int prev=-1;for(size_t i=0;i<n;i++){if(*p==end||(int)**p<=prev){*ok=false;tp_destruir(r);return NULL;}unsigned char b=*(*p)++;prev=b;nodo_trie_t *h=dec(p,end,ok);if(!*ok){tp_destruir(r);return NULL;}r->hijos[i]=(trie_hijo_t){b,h};r->cantidad++;}return r;}
nodo_trie_t *trie_deserializar(const unsigned char *b,size_t n){if(!b||n<7||memcmp(b,"TRP1",4))return NULL;const unsigned char *p=b+4,*e=b+n;bool ok=true;nodo_trie_t *r=dec(&p,e,&ok);if(!ok||p!=e){tp_destruir(r);return NULL;}return r;}

nodo_trie_t *trie_crear(void){return tp_nuevo();}
bool trie_insertar(nodo_trie_t *r,const char *s){return tp_insertar(r,s);}
bool trie_buscar(const nodo_trie_t *r,const char *s){return tp_buscar(r,s);}
void trie_destruir(nodo_trie_t *r){tp_destruir(r);}
