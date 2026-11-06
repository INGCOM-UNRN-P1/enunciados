#ifndef EJERCICIO_TRIE_PREF_11_H
#define EJERCICIO_TRIE_PREF_11_H
#include <stdbool.h>
#include <stdint.h>
typedef struct ip_nodo {struct ip_nodo *hijo[2];bool tiene_valor;int valor;} ip_nodo_t;
typedef struct {ip_nodo_t *raiz;} ip_trie_t;
void ip_trie_iniciar(ip_trie_t *t);
bool ip_trie_insertar(ip_trie_t *t,uint32_t direccion,unsigned prefijo,int valor);
bool ip_trie_buscar(const ip_trie_t *t,uint32_t direccion,int *valor);
void ip_trie_destruir(ip_trie_t *t);
#endif /* EJERCICIO_TRIE_PREF_11_H */
