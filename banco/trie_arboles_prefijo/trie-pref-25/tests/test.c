#include "../trie-pref-25.h"
#include <assert.h>
#include <string.h>
int main(void){char o[32];assert(subcadena_comun_mas_larga("xabcdz","yabcq",o,sizeof o)==3);assert(!strcmp(o,"abc"));assert(subcadena_comun_mas_larga("aaaa","baaa",o,sizeof o)==3);assert(!strcmp(o,"aaa"));assert(subcadena_comun_mas_larga("abc","xyz",o,sizeof o)==0&&!o[0]);assert(subcadena_comun_mas_larga("abc","abc",o,2)==0&&!o[0]);assert(!subcadena_comun_mas_larga(NULL,"x",o,sizeof o));return 0;}
