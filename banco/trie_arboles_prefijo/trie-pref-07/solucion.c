#include "trie-pref-07.h"
size_t trie_prefijo_mas_largo(const trie_nodo_t *r,const char *q,char *out,size_t cap){if(!out||!cap)return 0;out[0]=0;if(!r||!q||strlen(q)>=cap)return 0;const trie_nodo_t *n=r;size_t best=0;for(size_t i=0;q[i];i++){n=tp_hijo(n,(unsigned char)q[i]);if(!n)break;if(n->terminal)best=i+1;}memcpy(out,q,best);out[best]=0;return best;}

nodo_trie_t *trie_crear(void){return tp_nuevo();}
bool trie_insertar(nodo_trie_t *r,const char *s){return tp_insertar(r,s);}
void trie_destruir(nodo_trie_t *r){tp_destruir(r);}
