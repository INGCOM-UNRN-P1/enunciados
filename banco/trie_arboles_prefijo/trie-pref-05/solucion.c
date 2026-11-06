#include "trie-pref-05.h"
static size_t recoger(const trie_nodo_t *n,char *buf,size_t d,char out[][256],size_t cap,size_t k){if(k>=cap||d>=255)return k;if(n->terminal){buf[d]='\0';memcpy(out[k++],buf,d+1);}for(size_t i=0;i<n->cantidad&&k<cap;i++){buf[d]=(char)n->hijos[i].byte;k=recoger(n->hijos[i].nodo,buf,d+1,out,cap,k);}return k;}
size_t trie_autocompletar(const trie_nodo_t *r,const char *prefijo,char out[][256],size_t cap){if(!r||!prefijo||(!out&&cap))return 0;trie_nodo_t *n=tp_buscar_nodo(r,prefijo);if(!n)return 0;size_t d=strlen(prefijo);char b[256];if(d>=sizeof b)return 0;memcpy(b,prefijo,d+1);return recoger(n,b,d,out,cap,0);}

nodo_trie_t *trie_crear(void){return tp_nuevo();}
bool trie_insertar(nodo_trie_t *r,const char *s){return r&&s&&strlen(s)<=255&&tp_insertar(r,s);}
void trie_destruir(nodo_trie_t *r){tp_destruir(r);}
