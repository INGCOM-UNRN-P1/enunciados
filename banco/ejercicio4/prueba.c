/**
 * @file prueba.c
 * @brief Pruebas de caja negra para el TDA Secuencia (p1_test).
 *
 * Tarea del estudiante:
 * Diseñar e implementar las pruebas unitarias completas con p1_test
 * para validar el contrato de secuencia.h independientemente de la implementación.
 */

#include <stdio.h>
#include <stdbool.h>
#include "p1_test.h"
#include "secuencia.h"

TEST(prueba_creacion_y_estado_inicial)
{
    secuencia_t *sec = secuencia_crear(5);
    
    ASSERT_TRUE(sec != NULL);
    ASSERT_TRUE(secuencia_esta_vacia(sec));
    ASSERT_TRUE(secuencia_largo(sec) == 0);

    /* Capacidad invalida debe retornar NULL */
    secuencia_t *sec_invalida = secuencia_crear(0);
    ASSERT_TRUE(sec_invalida == NULL);

    secuencia_destruir(sec);
}

TEST(prueba_insercion_y_obtencion)
{
    secuencia_t *sec = secuencia_crear(3);
    int valor_obtenido = 0;

    /* Insertar al inicio, al final y en el medio */
    ASSERT_TRUE(secuencia_insertar(sec, 0, 10)); /* [10] */
    ASSERT_TRUE(secuencia_insertar(sec, 1, 30)); /* [10, 30] */
    ASSERT_TRUE(secuencia_insertar(sec, 1, 20)); /* [10, 20, 30] */

    ASSERT_FALSE(secuencia_esta_vacia(sec));
    ASSERT_TRUE(secuencia_largo(sec) == 3);

    /* Verificar la lectura de cada elemento */
    ASSERT_TRUE(secuencia_obtener(sec, 0, &valor_obtenido));
    ASSERT_TRUE(valor_obtenido == 10);

    ASSERT_TRUE(secuencia_obtener(sec, 1, &valor_obtenido));
    ASSERT_TRUE(valor_obtenido == 20);

    ASSERT_TRUE(secuencia_obtener(sec, 2, &valor_obtenido));
    ASSERT_TRUE(valor_obtenido == 30);

    /* Intentar superar la capacidad máxima */
    ASSERT_FALSE(secuencia_insertar(sec, 3, 40));

    /* Intentar insertar en un índice fuera de rango (> cantidad) */
    ASSERT_FALSE(secuencia_insertar(sec, 10, 99));

    secuencia_destruir(sec);
}

TEST(prueba_eliminacion)
{
    secuencia_t *sec = secuencia_crear(5);
    int extraido = 0;

    secuencia_insertar(sec, 0, 10);
    secuencia_insertar(sec, 1, 20);
    secuencia_insertar(sec, 2, 30); /* [10, 20, 30] */

    /* Eliminar elemento del medio (pos 1 -> 20) */
    ASSERT_TRUE(secuencia_eliminar(sec, 1, &extraido));
    ASSERT_TRUE(extraido == 20);
    ASSERT_TRUE(secuencia_largo(sec) == 2);

    /* Verificar que los elementos restantes quedaron reconectados [10, 30] */
    ASSERT_TRUE(secuencia_obtener(sec, 0, &extraido));
    ASSERT_TRUE(extraido == 10);

    ASSERT_TRUE(secuencia_obtener(sec, 1, &extraido));
    ASSERT_TRUE(extraido == 30);

    /* Eliminar la cabeza (pos 0 -> 10) */
    ASSERT_TRUE(secuencia_eliminar(sec, 0, &extraido));
    ASSERT_TRUE(extraido == 10);
    ASSERT_TRUE(secuencia_largo(sec) == 1);

    /* Intentar eliminar en una posición fuera de rango (>= cantidad) */
    ASSERT_FALSE(secuencia_eliminar(sec, 5, &extraido));

    secuencia_destruir(sec);
}

TEST(prueba_a_cadena)
{
    secuencia_t *sec = secuencia_crear(5);

    /* Test en secuencia vacia */
    char *str_vacio = secuencia_a_cadena(sec);
    ASSERT_TRUE(str_vacio != NULL);
    ASSERT_TRUE(strcmp(str_vacio, "[]") == 0);
    free(str_vacio);

    /* Test en secuencia con elementos */
    secuencia_insertar(sec, 0, 10);
    secuencia_insertar(sec, 1, 20);
    secuencia_insertar(sec, 2, 30);

    char *str_lleno = secuencia_a_cadena(sec);
    ASSERT_TRUE(str_lleno != NULL);
    ASSERT_TRUE(strcmp(str_lleno, "[10, 20, 30]") == 0);
    free(str_lleno);

    secuencia_destruir(sec);
}

TEST(prueba_manejo_de_nulos)
{
    int destino = 0;

    ASSERT_FALSE(secuencia_obtener(NULL, 0, &destino));
    ASSERT_FALSE(secuencia_insertar(NULL, 0, 10));
    ASSERT_FALSE(secuencia_eliminar(NULL, 0, &destino));
    ASSERT_TRUE(secuencia_largo(NULL) == 0);
    ASSERT_FALSE(secuencia_esta_vacia(NULL));
    
    ASSERT_TRUE(secuencia_a_cadena(NULL) == NULL);

    secuencia_destruir(NULL);
}

int main(int conteo_args, char **argumentos)
{
    TEST_SUITE_BEGIN_ARGS("Suite de Pruebas: Ejercicio 4 (TDA Secuencia)", conteo_args, argumentos);

    RUN_TEST(prueba_creacion_y_estado_inicial);
    RUN_TEST(prueba_insercion_y_obtencion);
    RUN_TEST(prueba_eliminacion);
    RUN_TEST(prueba_a_cadena);
    RUN_TEST(prueba_manejo_de_nulos);

    return TEST_REPORT();
}