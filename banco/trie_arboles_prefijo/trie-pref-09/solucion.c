#include "trie-pref-09.h"
#include <stdlib.h>
static tst_nodo_t *tnew(unsigned char c){tst_nodo_t *n=calloc(1,sizeof *n);if(n)n->byte=c;return n;}
static bool tins(tst_nodo_t **p,const unsigned char *s){if(!*p){*p=tnew(*s);if(!*p)return false;}if(*s<(*p)->byte)return tins(&(*p)->menor,s);if(*s>(*p)->byte)return tins(&(*p)->mayor,s);if(s[1])return tins(&(*p)->igual,s+1);(*p)->terminal=true;return true;}
bool tst_insertar(tst_nodo_t **r,const char *s){return r&&s&&*s&&tins(r,(const unsigned char*)s);}
bool tst_buscar(const tst_nodo_t *n,const char *s){if(!s||!*s)return false;while(n){unsigned char c=(unsigned char)*s;if(c<n->byte)n=n->menor;else if(c>n->byte)n=n->mayor;else if(s[1]){n=n->igual;s++;}else return n->terminal;}return false;}
void tst_destruir(tst_nodo_t *n){if(!n)return;tst_destruir(n->menor);tst_destruir(n->igual);tst_destruir(n->mayor);free(n);}
