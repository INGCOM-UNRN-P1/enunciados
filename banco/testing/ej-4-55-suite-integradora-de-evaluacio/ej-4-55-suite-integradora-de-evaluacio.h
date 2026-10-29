#ifndef EJERCICIO_EJ_4_55_SUITE_INTEGRADORA_DE_EVALUACIO_H
#define EJERCICIO_EJ_4_55_SUITE_INTEGRADORA_DE_EVALUACIO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación validar_nota */
bool validar_nota(int nota);
/* Operación calcular_promedio_curso */
double calcular_promedio_curso(const int notas[], int cantidad);
/* Operación contar_aprobados */
int contar_aprobados(const int notas[], int cantidad, int nota_minima);
/* Operación estado_final_alumno */
int estado_final_alumno(int p1, int p2, int rec);
/* Operación test_sistema_calificaciones */
void test_sistema_calificaciones(void);

#endif /* EJERCICIO_EJ_4_55_SUITE_INTEGRADORA_DE_EVALUACIO_H */
