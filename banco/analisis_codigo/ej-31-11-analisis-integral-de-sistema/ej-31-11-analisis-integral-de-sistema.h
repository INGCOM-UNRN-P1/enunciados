#ifndef EJERCICIO_EJ_31_11_ANALISIS_INTEGRAL_DE_SISTEMA_H
#define EJERCICIO_EJ_31_11_ANALISIS_INTEGRAL_DE_SISTEMA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación agregar_estudiante */
bool agregar_estudiante(sistema_estudiantes_t *sistema, const char *nombre,
                        int edad, float promedio);
/* Operación liberar_sistema */
void liberar_sistema(sistema_estudiantes_t *sistema);

#endif /* EJERCICIO_EJ_31_11_ANALISIS_INTEGRAL_DE_SISTEMA_H */
