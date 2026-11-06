#ifndef EJERCICIO_EJ_20_39_H
#define EJERCICIO_EJ_20_39_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum estado_proceso { PROCESO_NUEVO, PROCESO_LISTO, PROCESO_EJECUTANDO, PROCESO_BLOQUEADO, PROCESO_TERMINADO };
enum razon_bloqueo { BLOQ_IO, BLOQ_MUTEX, BLOQ_SEMAFORO, BLOQ_MENSAJE };
typedef struct { int pid; enum estado_proceso estado; enum razon_bloqueo razon; int prioridad; } proceso_t;

bool transicion_estado(proceso_t *proceso, enum estado_proceso nuevo_estado);
bool puede_ejecutar(const proceso_t *proceso);

#endif
