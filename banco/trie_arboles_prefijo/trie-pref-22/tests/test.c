#include "../trie-pref-22.h"
#include <assert.h>
int main(void){nodo_trie_t *r=tp_nuevo();assert(r);assert(tp_insertar(r,"casa"));assert(tp_insertar(r,"cama"));assert(tp_insertar(r,"cas"));assert(trie_coincide_patron(r,"ca?a"));assert(trie_coincide_patron(r,"c??"));assert(!trie_coincide_patron(r,"c??a?"));assert(!trie_coincide_patron(r,"ca?b"));assert(!trie_coincide_patron(NULL,"?"));tp_destruir(r);return 0;}
