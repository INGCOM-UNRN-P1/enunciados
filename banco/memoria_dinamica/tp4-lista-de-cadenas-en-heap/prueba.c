/**
 * @file prueba.c
 * @brief Suite de pruebas unitarias para el Ejercicio 5.
 */

#include <stdio.h>
#include "p1_test.h"
#include "registro_csv.h"

TEST(prueba_ejercicio5_pendiente)
{
    /* TODO: Tarea del estudiante - Agregar casos de prueba con p1_test */
    ASSERT_TRUE(true);
}

int main(int conteo_args, char **argumentos)
{
    TEST_SUITE_BEGIN_ARGS("Suite de Pruebas: Ejercicio 5", conteo_args, argumentos);
    RUN_TEST(prueba_ejercicio5_pendiente);
    return TEST_REPORT();
}
