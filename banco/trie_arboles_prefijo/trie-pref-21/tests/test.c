#include "../trie-pref-21.h"
#include <assert.h>
#include <string.h>
int main(void){char o[256];assert(trie_palindromo_mas_largo("abacdfgdcaba",o,sizeof o)==3&&!strcmp(o,"aba"));assert(trie_palindromo_mas_largo("forgeeksskeegfor",o,sizeof o)==10&&!strcmp(o,"geeksskeeg"));assert(trie_palindromo_mas_largo("",o,sizeof o)==0&&!o[0]);assert(trie_palindromo_mas_largo("aba",o,3)==0&&!o[0]);assert(trie_palindromo_mas_largo("abc",o,2)==1&&!strcmp(o,"a"));assert(!trie_palindromo_mas_largo(NULL,o,sizeof o));return 0;}
