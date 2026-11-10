#include "../trie-pref-30.h"
#include <assert.h>
#include <string.h>
int main(void){const char *w[]={"casa","casco","cama","perro"};size_t f[]={3,8,3,100};char out[4][256];assert(trie_predecir(w,f,4,"ca",3,out,4)==3);assert(!strcmp(out[0],"casco")&&!strcmp(out[1],"cama")&&!strcmp(out[2],"casa"));assert(trie_predecir(w,f,4,"",2,out,4)==2&&!strcmp(out[0],"perro"));const char *q[]={"ab","ac","zz"};size_t g[]={1,9,100};assert(trie_predecir(q,g,3,"a",2,out,3)==2&&!strcmp(out[0],"ac")&&!strcmp(out[1],"ab"));const char *d[]={"a","a"};size_t h[]={1,2};assert(!trie_predecir(d,h,2,"",2,out,3));assert(!trie_predecir(w,f,4,"z",3,out,4));return 0;}
