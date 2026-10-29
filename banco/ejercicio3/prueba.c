/**
 * @file prueba.c
 * @brief Suite de pruebas unitarias para el TDA Conjunto (p1_test).
 *
 * Tarea del estudiante:
 * Diseñar e implementar las pruebas unitarias completas con p1_test
 * para validar el contrato de conjunto.h.
 */

#include <stdio.h>
#include <stdbool.h>
#include "p1_test.h"
#include "conjunto.h"

TEST(prueba_creacion_y_vacios)
{
    conjunto_t *c = conjunto_crear(5);
    ASSERT_TRUE(c != NULL);
    ASSERT_TRUE(conjunto_cardinal(c) == 0);
    ASSERT_TRUE(conjunto_esta_vacio(c));

    conjunto_destruir(c);
}

/* --- Pruebas de Inserción, Unicidad y Límite de Capacidad -- */
TEST(prueba_agregar_y_pertenencia)
{
    conjunto_t *c = conjunto_crear(3);

    /* Inserción normal */
    ASSERT_TRUE(conjunto_agregar(c, 10));
    ASSERT_TRUE(conjunto_pertenece(c, 10));
    ASSERT_FALSE(conjunto_esta_vacio(c));
    ASSERT_TRUE(conjunto_cardinal(c) == 1);

    /* Idempotencia: agregar duplicado debe dar true sin incrementar cardinal */
    ASSERT_TRUE(conjunto_agregar(c, 10));
    ASSERT_TRUE(conjunto_cardinal(c) == 1);

    ASSERT_TRUE(conjunto_agregar(c, 20));
    ASSERT_TRUE(conjunto_agregar(c, 30));
    ASSERT_TRUE(conjunto_cardinal(c) == 3);

    /* Intento de sobrepasar la capacidad máxima */
    ASSERT_FALSE(conjunto_agregar(c, 40));
    ASSERT_TRUE(conjunto_cardinal(c) == 3);

    conjunto_destruir(c);
}

/* --- Pruebas de Eliminación de Elementos --- */
TEST(prueba_eliminar_elementos)
{
    conjunto_t *c = conjunto_crear(5);
    conjunto_agregar(c, 5);
    conjunto_agregar(c, 15);
    conjunto_agregar(c, 25);

    /* Eliminar elemento existente */
    ASSERT_TRUE(conjunto_eliminar(c, 15));
    ASSERT_FALSE(conjunto_pertenece(c, 15));
    ASSERT_TRUE(conjunto_cardinal(c) == 2);

    /* Eliminar elemento inexistente */
    ASSERT_FALSE(conjunto_eliminar(c, 99));
    ASSERT_TRUE(conjunto_cardinal(c) == 2);

    /* Eliminar los restantes */
    ASSERT_TRUE(conjunto_eliminar(c, 5));
    ASSERT_TRUE(conjunto_eliminar(c, 25));
    ASSERT_TRUE(conjunto_esta_vacio(c));

    conjunto_destruir(c);
}

/* --- Pruebas de Subconjuntos (A ⊆ B) --- */
TEST(prueba_subconjuntos)
{
    conjunto_t *a = conjunto_crear(5);
    conjunto_t *b = conjunto_crear(5);

    /* El conjunto vacío es subconjunto de cualquier conjunto */
    ASSERT_TRUE(conjunto_es_subconjunto(a, b));

    conjunto_agregar(a, 1);
    conjunto_agregar(a, 2);

    conjunto_agregar(b, 3);
    conjunto_agregar(b, 2);
    conjunto_agregar(b, 1);

    /* A = {1, 2} es subconjunto de B = {3, 2, 1} */
    ASSERT_TRUE(conjunto_es_subconjunto(a, b));
    ASSERT_FALSE(conjunto_es_subconjunto(b, a));

    conjunto_agregar(a, 99);
    /* A = {1, 2, 99} ya no es subconjunto de B */
    ASSERT_FALSE(conjunto_es_subconjunto(a, b));

    conjunto_destruir(a);
    conjunto_destruir(b);
}

/* --- Pruebas de Unión (A ∪ B) e Intersección (A ∩ B) --- */
TEST(prueba_operaciones_conjuntos)
{
    conjunto_t *a = conjunto_crear(5);
    conjunto_t *b = conjunto_crear(5);

    conjunto_agregar(a, 10);
    conjunto_agregar(a, 20);

    conjunto_agregar(b, 20);
    conjunto_agregar(b, 30);

    /* Unión: {10, 20} ∪ {20, 30} = {10, 20, 30} */
    conjunto_t *u = conjunto_union(a, b);
    ASSERT_TRUE(u != NULL);
    ASSERT_TRUE(conjunto_cardinal(u) == 3);
    ASSERT_TRUE(conjunto_pertenece(u, 10));
    ASSERT_TRUE(conjunto_pertenece(u, 20));
    ASSERT_TRUE(conjunto_pertenece(u, 30));

    /* Intersección: {10, 20} ∩ {20, 30} = {20} */
    conjunto_t *i = conjunto_interseccion(a, b);
    ASSERT_TRUE(i != NULL);
    ASSERT_TRUE(conjunto_cardinal(i) == 1);
    ASSERT_TRUE(conjunto_pertenece(i, 20));
    ASSERT_FALSE(conjunto_pertenece(i, 10));

    conjunto_destruir(a);
    conjunto_destruir(b);
    conjunto_destruir(u);
    conjunto_destruir(i);
}

/* --- Pruebascon Punteros NULL --- */
TEST(prueba_manejo_null)
{
    ASSERT_TRUE(conjunto_cardinal(NULL) == 0);
    ASSERT_FALSE(conjunto_esta_vacio(NULL));
    ASSERT_FALSE(conjunto_pertenece(NULL, 10));
    ASSERT_FALSE(conjunto_agregar(NULL, 10));
    ASSERT_FALSE(conjunto_eliminar(NULL, 10));
    ASSERT_FALSE(conjunto_es_subconjunto(NULL, NULL));
    ASSERT_TRUE(conjunto_union(NULL, NULL) == NULL);
    ASSERT_TRUE(conjunto_interseccion(NULL, NULL) == NULL); 
    conjunto_destruir(NULL);
}

int main(int conteo_args, char **argumentos)
{
    TEST_SUITE_BEGIN_ARGS("Suite de Pruebas: Ejercicio 3 (TDA Conjunto)", conteo_args, argumentos);

    RUN_TEST(prueba_creacion_y_vacios);
    RUN_TEST(prueba_agregar_y_pertenencia);
    RUN_TEST(prueba_eliminar_elementos);
    RUN_TEST(prueba_subconjuntos);
    RUN_TEST(prueba_operaciones_conjuntos);
    RUN_TEST(prueba_manejo_null);

    return TEST_REPORT();
}
