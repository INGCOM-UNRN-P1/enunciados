#include "../trie-pref-29.h"
#include <assert.h>
int main(void){const char *w[]={"casa","casco","casa","perro"};trie_benchmark_t s;assert(trie_comparar_estructuras(w,4,&s));assert(s.trie_bytes>0&&s.hash_comparaciones>0&&s.bst_comparaciones>0);assert(trie_comparar_estructuras(NULL,0,&s));assert(s.trie_bytes==0&&s.hash_comparaciones==0&&s.bst_comparaciones==0);const char *bad[]={NULL};assert(!trie_comparar_estructuras(bad,1,&s));return 0;}
