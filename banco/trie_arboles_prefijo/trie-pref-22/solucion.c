#include "trie-pref-22.h"
#include <string.h>
static bool coincide(const nodo_trie_t *n,const char *p){if(!n||!p)return false;if(*p=='\0')return n->terminal;if(*p=='?'){for(size_t i=0;i<n->cantidad;i++)if(coincide(n->hijos[i].nodo,p+1))return true;return false;}n=tp_hijo(n,(unsigned char)*p);return coincide(n,p+1);}
bool trie_coincide_patron(const nodo_trie_t *raiz,const char *patron){return raiz&&patron&&strlen(patron)<=255&&coincide(raiz,patron);}
