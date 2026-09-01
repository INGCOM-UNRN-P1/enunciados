#ifndef EJERCICIO_EJ_31_16_ANALISIS_INTEGRAL_SISTEMA_DE_G_H
#define EJERCICIO_EJ_31_16_ANALISIS_INTEGRAL_SISTEMA_DE_G_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

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
