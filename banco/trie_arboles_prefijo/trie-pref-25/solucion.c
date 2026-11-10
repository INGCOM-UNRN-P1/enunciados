#include "trie-pref-25.h"
#include "../trie-pref-04/trie-pref-common.h"
#include <string.h>
size_t subcadena_comun_mas_larga(const char *a,const char *b,char *out,size_t cap){if(out&&cap)out[0]='\0';if(!a||!b||!out)return 0;trie_nodo_t *r=tp_nuevo();if(!r)return 0;size_t na=strlen(a),nb=strlen(b),best=0,start=0;if(na>255||nb>255)return 0;for(size_t i=0;i<na;i++)if(!tp_insertar(r,a+i)){tp_destruir(r);return 0;}for(size_t i=0;i<nb;i++){const trie_nodo_t *n=r;for(size_t j=i;j<nb;j++){n=tp_hijo(n,(unsigned char)b[j]);if(!n)break;size_t len=j-i+1;if(len>best){best=len;start=i;}}}if(best+1<=cap)memcpy(out,b+start,best),out[best]='\0';else best=0;tp_destruir(r);return best;}
