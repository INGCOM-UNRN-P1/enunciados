#include "trie-pref-20.h"
#include <stdio.h>
nodo_trie_t *trie_cargar_diccionario(FILE *f){if(!f)return NULL;nodo_trie_t *r=tp_nuevo();if(!r)return NULL;char linea[257];while(fgets(linea,sizeof linea,f)){size_t n=strlen(linea);bool fin=n&&linea[n-1]=='\n';if(fin)linea[--n]=0;if(n&&linea[n-1]=='\r')linea[--n]=0;if(n>255){tp_destruir(r);return NULL;}if(!fin&&!feof(f)){int c=fgetc(f);if(c!=EOF){tp_destruir(r);return NULL;}}if(n&&!tp_insertar(r,linea)){tp_destruir(r);return NULL;}}if(ferror(f)){tp_destruir(r);return NULL;}return r;}
bool trie_buscar(const trie_nodo_t *r,const char *s){return tp_buscar(r,s);}
void trie_destruir(nodo_trie_t *r){tp_destruir(r);}
