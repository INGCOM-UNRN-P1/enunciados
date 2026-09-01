#ifndef EJERCICIO_LISTA_DOBLE_ORDENADA_H
#define EJERCICIO_LISTA_DOBLE_ORDENADA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar_lista */
void inicializar_lista(ListaDoble *lista);
/* Operación insertar_ordenado */
void insertar_ordenado(ListaDoble *lista, int valor);
/* Operación eliminar_valor */
void eliminar_valor(ListaDoble *lista, int valor);
/* Operación imprimir_ascendente */
void imprimir_ascendente(const ListaDoble *lista);
/* Operación imprimir_descendente */
void imprimir_descendente(const ListaDoble *lista);
/* Operación liberar_lista */
void liberar_lista(ListaDoble *lista);

#endif /* EJERCICIO_LISTA_DOBLE_ORDENADA_H */
