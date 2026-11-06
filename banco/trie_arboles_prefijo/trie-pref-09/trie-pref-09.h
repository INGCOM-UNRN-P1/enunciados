#ifndef EJERCICIO_TRIE_PREF_09_H
#define EJERCICIO_TRIE_PREF_09_H
#include <stdbool.h>
typedef struct tst_nodo {unsigned char byte;bool terminal;struct tst_nodo *menor,*igual,*mayor;} tst_nodo_t;
bool tst_insertar(tst_nodo_t **raiz,const char *palabra);
bool tst_buscar(const tst_nodo_t *raiz,const char *palabra);
void tst_destruir(tst_nodo_t *raiz);
#endif /* EJERCICIO_TRIE_PREF_09_H */
