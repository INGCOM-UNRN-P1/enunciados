#ifndef EJERCICIO_TRIE_PREF_30_H
#define EJERCICIO_TRIE_PREF_30_H
#include <stddef.h>
size_t trie_predecir(const char *const palabras[],const size_t frecuencias[],size_t cantidad,const char *prefijo,size_t limite,char salida[][256],size_t capacidad);
#endif
