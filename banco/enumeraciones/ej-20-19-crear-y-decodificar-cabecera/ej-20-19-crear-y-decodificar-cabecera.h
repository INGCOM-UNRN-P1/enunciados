#ifndef EJERCICIO_EJ_20_19_H
#define EJERCICIO_EJ_20_19_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum tipo_mensaje { MSG_DATOS, MSG_ACK, MSG_NACK, MSG_RESET };
typedef struct { unsigned int tipo:2; unsigned int prioridad:2; unsigned int secuencia:4; } cabecera_mensaje_t;
cabecera_mensaje_t crear_cabecera(enum tipo_mensaje tipo, unsigned int prioridad, unsigned int secuencia);

#endif
