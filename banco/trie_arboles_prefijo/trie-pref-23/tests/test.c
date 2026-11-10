#include "../trie-pref-23.h"
#include <assert.h>
int main(void){trie_sufijos_t t;assert(trie_sufijos_crear(&t,"banana"));assert(trie_sufijos_contiene(&t,"ana"));assert(trie_sufijos_contiene(&t,"nana"));assert(trie_sufijos_contiene(&t,""));assert(!trie_sufijos_contiene(&t,"band"));trie_sufijos_destruir(&t);assert(!t.raiz);assert(!trie_sufijos_crear(&t,NULL));return 0;}
