#ifndef EJERCICIO_EJ_31_16_ANALISIS_INTEGRAL_SISTEMA_DE_G_H
#define EJERCICIO_EJ_31_16_ANALISIS_INTEGRAL_SISTEMA_DE_G_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

typedef struct nodo { int dato; struct nodo *siguiente; } nodo_t;
typedef struct { nodo_t *primero; nodo_t *ultimo; size_t tamanio; } lista_t;
typedef void (*funcion_lista_t)(int *, void *);
typedef bool (*predicado_lista_t)(int, void *);
lista_t *lista_crear(void);
void lista_aplicar(lista_t *, funcion_lista_t, void *);
lista_t *lista_filtrar(const lista_t *, predicado_lista_t, void *);

/* Operación lista_insertar_final */
bool lista_insertar_final(lista_t *lista, int dato);
/* Operación lista_eliminar_primero */
bool lista_eliminar_primero(lista_t *lista, int *dato);
/* Operación lista_destruir */
void lista_destruir(lista_t *lista);
/* Operación duplicar_dato */
void duplicar_dato(int *dato, void *extra);
/* Operación es_mayor_que */
bool es_mayor_que(int dato, void *extra);

#endif /* EJERCICIO_EJ_31_16_ANALISIS_INTEGRAL_SISTEMA_DE_G_H */
