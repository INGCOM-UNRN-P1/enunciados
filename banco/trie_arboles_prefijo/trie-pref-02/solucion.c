#include "trie-pref-02.h"
#include <stdlib.h>
static int ix(unsigned char c){if(c>='a'&&c<='z')return c-'a';if(c>='A'&&c<='Z')return c-'A';if(c>='0'&&c<='9')return 26+c-'0';return -1;}
void trie02_insertar(trie02_nodo_t*r,const char*w){if(!r||!w||!*w)return;for(const char*q=w;*q;q++)if(ix((unsigned char)*q)<0)return;for(;*w;w++){int i=ix((unsigned char)*w);if(i<0)return;if(!r->hijos[i]){r->hijos[i]=calloc(1,sizeof(*r));if(!r->hijos[i])return;}r=r->hijos[i];}r->fin=1;}
int trie02_contiene(const trie02_nodo_t*r,const char*w){if(!r||!w||!*w)return 0;for(;*w;w++){int i=ix((unsigned char)*w);if(i<0||!r->hijos[i])return 0;r=r->hijos[i];}return r->fin!=0;}
void trie02_liberar(trie02_nodo_t*r){if(!r)return;for(size_t i=0;i<TRIE02_ALFABETO;i++)trie02_liberar(r->hijos[i]);free(r);}
