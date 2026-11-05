#ifndef EJERCICIO_EJ_20_20_H
#define EJERCICIO_EJ_20_20_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum tipo_mensaje { MSG_DATOS, MSG_ACK, MSG_NACK, MSG_RESET };
typedef struct { unsigned int tipo:2; unsigned int prioridad:2; unsigned int secuencia:4; } cabecera_mensaje_t;
bool cabecera_valida(cabecera_mensaje_t cabecera);

#endif
