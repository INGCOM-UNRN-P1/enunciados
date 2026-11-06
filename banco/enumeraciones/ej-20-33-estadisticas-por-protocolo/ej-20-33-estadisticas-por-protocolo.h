#ifndef EJERCICIO_EJ_20_33_H
#define EJERCICIO_EJ_20_33_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

typedef enum { PROTOCOLO_TCP, PROTOCOLO_UDP, PROTOCOLO_ICMP, PROTOCOLO_OTRO } protocolo_t;
typedef struct { protocolo_t protocolo; } paquete_red_t;
typedef struct { unsigned int tcp, udp, icmp, otro; } estadisticas_protocolo_t;
estadisticas_protocolo_t contar_por_protocolo(const paquete_red_t *paquetes, size_t cantidad);

#endif
