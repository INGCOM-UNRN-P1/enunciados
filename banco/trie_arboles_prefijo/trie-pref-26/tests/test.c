#include "../trie-pref-26.h"
#include <assert.h>
int main(void){trie_texto_indice_t x;assert(trie_texto_indexar(&x,"sol luna sol\nsol"));size_t p[4];assert(trie_texto_buscar(&x,"sol",p,4)==3&&p[0]==0&&p[1]==9&&p[2]==13);assert(trie_texto_buscar(&x,"luna",p,1)==1&&p[0]==4);assert(!trie_texto_buscar(&x,"lu",p,4));trie_texto_destruir(&x);assert(!x.raiz);assert(trie_texto_indexar(&x,""));assert(!trie_texto_buscar(&x,"x",p,4));trie_texto_destruir(&x);return 0;}
