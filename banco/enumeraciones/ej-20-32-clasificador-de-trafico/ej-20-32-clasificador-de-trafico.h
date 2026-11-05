#ifndef EJERCICIO_EJ_20_32_H
#define EJERCICIO_EJ_20_32_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum protocolo { PROTOCOLO_TCP, PROTOCOLO_UDP, PROTOCOLO_ICMP, PROTOCOLO_OTRO };
enum tipo_trafico { TRAFICO_NORMAL, TRAFICO_SOSPECHOSO, TRAFICO_MALICIOSO };
typedef struct { enum protocolo proto; enum tipo_trafico tipo; unsigned int puerto_origen,puerto_destino; size_t bytes_transferidos; } paquete_red_t;
enum tipo_trafico clasificar_paquete(const paquete_red_t *paquete);

#endif
