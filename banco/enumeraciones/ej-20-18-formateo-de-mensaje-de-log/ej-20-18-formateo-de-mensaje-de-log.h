#ifndef EJERCICIO_EJ_20_18_H
#define EJERCICIO_EJ_20_18_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum nivel_log { LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR };
int formatear_log(enum nivel_log nivel, const char *mensaje, char *buffer, size_t tam);

#endif
