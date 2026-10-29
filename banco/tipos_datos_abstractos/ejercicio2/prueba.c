/**
 * @file prueba.c
 * @brief Pruebas de caja negra para el TDA Duración (p1_test).
 *
 * Tarea del estudiante:
 * Diseñar e implementar las pruebas unitarias completas con p1_test
 * para validar el contrato de tiempo.h independientemente de la implementación.
 */

#include <stdio.h>
#include <stdbool.h>
#include "p1_test.h"
#include "tiempo.h"

TEST(prueba_creacion_y_normalizacion)
{
    /* 1. Creación directa sin excesos (1h 20m 30s) */
    tiempo_t *t1 = tiempo_crear(1, 20, 30);
    ASSERT_TRUE(t1 != NULL);
    ASSERT_INT_EQ(1, tiempo_horas(t1));
    ASSERT_INT_EQ(20, tiempo_minutos(t1));
    ASSERT_INT_EQ(30, tiempo_segundos(t1));
    ASSERT_TRUE(tiempo_en_segundos(t1) == 4830);
    tiempo_destruir(t1);

    /* 2. Normalización de excesos: 1h 70m 90s equivale a 2h 11m 30s */
    tiempo_t *t2 = tiempo_crear(1, 70, 90);
    ASSERT_TRUE(t2 != NULL);
    ASSERT_INT_EQ(2, tiempo_horas(t2));
    ASSERT_INT_EQ(11, tiempo_minutos(t2));
    ASSERT_INT_EQ(30, tiempo_segundos(t2));
    ASSERT_TRUE(tiempo_en_segundos(t2) == 7890);
    tiempo_destruir(t2);
}

TEST(prueba_incrementar)
{
    /* Arrancamos en 1h 59m 50s */
    tiempo_t *t = tiempo_crear(1, 59, 50);
    ASSERT_TRUE(t != NULL);

    /* Incrementamos 20 segundos -> pasa a 2h 0m 10s */
    tiempo_incrementar(t, 20);
    ASSERT_INT_EQ(2, tiempo_horas(t));
    ASSERT_INT_EQ(0, tiempo_minutos(t));
    ASSERT_INT_EQ(10, tiempo_segundos(t));
    ASSERT_TRUE(tiempo_en_segundos(t) == 7210);

    tiempo_destruir(t);

}

TEST(prueba_casos_bordes_y_null)
{
    /* Verificación de tolerancia a punteros NULL */
    ASSERT_INT_EQ(0, tiempo_horas(NULL));
    ASSERT_INT_EQ(0, tiempo_minutos(NULL));
    ASSERT_INT_EQ(0, tiempo_segundos(NULL));
    ASSERT_TRUE(tiempo_en_segundos(NULL) == 0);

    /* Llamadas seguras que no deben generar fallos de segmento */
    tiempo_incrementar(NULL, 100);
    tiempo_destruir(NULL);
}

int main(int conteo_args, char **argumentos)
{
    TEST_SUITE_BEGIN_ARGS("Suite de Pruebas: Ejercicio 2 (TDA Duración)", conteo_args, argumentos);

    RUN_TEST(prueba_creacion_y_normalizacion);
    RUN_TEST(prueba_incrementar);
    RUN_TEST(prueba_casos_bordes_y_null);

    return TEST_REPORT();
}
