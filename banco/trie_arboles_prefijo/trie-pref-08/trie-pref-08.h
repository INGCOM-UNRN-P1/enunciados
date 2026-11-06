#ifndef EJERCICIO_TRIE_PREF_08_H
#define EJERCICIO_TRIE_PREF_08_H
#include <stdbool.h>
#include <stddef.h>
#include <stdbool.h>
#include <stddef.h>
typedef struct radix_nodo radix_nodo_t;
typedef struct {char *etiqueta;size_t longitud;radix_nodo_t *hijo;} radix_arista_t;
struct radix_nodo {bool terminal;size_t cantidad,capacidad;radix_arista_t *aristas;};
radix_nodo_t *radix_crear(void);
bool radix_insertar(radix_nodo_t *raiz,const char *palabra);
bool radix_buscar(const radix_nodo_t *raiz,const char *palabra);
void radix_destruir(radix_nodo_t *raiz);
/* Inyecta un fallo en la reserva n de la próxima operación (-1 lo desactiva). */
void radix_test_fallar_reserva(long n);
#endif /* EJERCICIO_TRIE_PREF_08_H */
