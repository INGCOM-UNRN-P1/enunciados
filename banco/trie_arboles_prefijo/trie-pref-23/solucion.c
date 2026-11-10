#include "trie-pref-23.h"
#include <string.h>
bool trie_sufijos_crear(trie_sufijos_t *idx,const char *s){if(!idx)return false;idx->raiz=NULL;if(!s)return false;idx->raiz=tp_nuevo();if(!idx->raiz)return false;idx->raiz->terminal=true;size_t n=strlen(s);if(n>255){tp_destruir(idx->raiz);idx->raiz=NULL;return false;}for(size_t i=0;i<n;i++)if(!tp_insertar(idx->raiz,s+i)){tp_destruir(idx->raiz);idx->raiz=NULL;return false;}return true;}
bool trie_sufijos_contiene(const trie_sufijos_t *idx,const char *q){if(!idx||!idx->raiz||!q)return false;if(!*q)return true;const nodo_trie_t *n=idx->raiz;for(const unsigned char *p=(const unsigned char*)q;*p;p++){n=tp_hijo(n,*p);if(!n)return false;}return true;}
void trie_sufijos_destruir(trie_sufijos_t *idx){if(idx){tp_destruir(idx->raiz);idx->raiz=NULL;}}
