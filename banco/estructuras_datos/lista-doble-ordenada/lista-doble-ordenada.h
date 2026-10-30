#ifndef EJERCICIO_LISTA_DOBLE_ORDENADA_H
#define EJERCICIO_LISTA_DOBLE_ORDENADA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar_lista */
void inicializar_lista(lista_doble_t *lista);
/* Operación insertar_ordenado */
void insertar_ordenado(lista_doble_t *lista, int valor);
/* Operación eliminar_valor */
void eliminar_valor(lista_doble_t *lista, int valor);
/* Operación imprimir_ascendente */
void imprimir_ascendente(const lista_doble_t *lista);
/* Operación imprimir_descendente */
void imprimir_descendente(const lista_doble_t *lista);
/* Operación liberar_lista */
void liberar_lista(lista_doble_t *lista);

#endif /* EJERCICIO_LISTA_DOBLE_ORDENADA_H */
