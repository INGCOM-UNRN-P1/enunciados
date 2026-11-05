#ifndef EJERCICIO_EJ_20_21_H
#define EJERCICIO_EJ_20_21_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum opcion_compilacion { OPT_NINGUNA=0, OPT_OPTIMIZAR=1<<0, OPT_DEBUG=1<<1, OPT_WARNINGS=1<<2, OPT_WARNINGS_EXTRA=1<<3, OPT_PEDANTIC=1<<4 };
int generar_comando_compilacion(unsigned int opciones, char *buffer, size_t tam);

#endif
