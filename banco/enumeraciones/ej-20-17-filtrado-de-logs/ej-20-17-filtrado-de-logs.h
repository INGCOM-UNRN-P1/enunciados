#ifndef EJERCICIO_EJ_20_17_H
#define EJERCICIO_EJ_20_17_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum nivel_log { LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR };
bool debe_registrar(enum nivel_log nivel_mensaje, enum nivel_log nivel_minimo);

#endif
