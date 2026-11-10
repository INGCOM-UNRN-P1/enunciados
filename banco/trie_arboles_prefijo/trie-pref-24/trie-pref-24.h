#ifndef EJERCICIO_TRIE_PREF_24_H
#define EJERCICIO_TRIE_PREF_24_H
#include <stddef.h>
#include <stdbool.h>
typedef struct sufijo_nodo sufijo_nodo_t;
typedef struct {char *texto;size_t longitud;sufijo_nodo_t *raiz;} arbol_sufijos_t;
bool arbol_sufijos_crear(arbol_sufijos_t *,const char *);
bool arbol_sufijos_contiene(const arbol_sufijos_t *,const char *);
void arbol_sufijos_destruir(arbol_sufijos_t *);
#endif
