#ifndef EJERCICIO_EJ_20_43_H
#define EJERCICIO_EJ_20_43_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum estado_semaforo { SEMAFORO_ROJO, SEMAFORO_AMARILLO, SEMAFORO_VERDE, SEMAFORO_INTERMITENTE };
enum direccion_trafico { DIR_NORTE_SUR, DIR_ESTE_OESTE, DIR_TODAS };
typedef struct { enum estado_semaforo estado; enum direccion_trafico direccion_activa; int tiempo_restante; } semaforo_t;

void actualizar_semaforo(semaforo_t *semaforo);
enum estado_semaforo siguiente_estado(enum estado_semaforo actual);
bool puede_pasar(const semaforo_t *semaforo, enum direccion_trafico direccion);

#endif
