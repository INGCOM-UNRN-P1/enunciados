#ifndef EJERCICIO_EJ_20_55_MOTOR_DE_FSM_H
#define EJERCICIO_EJ_20_55_MOTOR_DE_FSM_H

#include <stdbool.h>

#define MAX_ESTADOS 32
#define MAX_TRANSICIONES 64

typedef enum
{
    FSM_ESTADO_0,
    FSM_ESTADO_1,
    FSM_ESTADO_2,
    FSM_ESTADO_3,
    FSM_ESTADO_4,
    FSM_ESTADO_5,
    FSM_ESTADO_6,
    FSM_ESTADO_7,
    FSM_ESTADO_8,
    FSM_ESTADO_9,
    FSM_ESTADO_10,
    FSM_ESTADO_11,
    FSM_ESTADO_12,
    FSM_ESTADO_13,
    FSM_ESTADO_14,
    FSM_ESTADO_15,
    FSM_ESTADO_16,
    FSM_ESTADO_17,
    FSM_ESTADO_18,
    FSM_ESTADO_19,
    FSM_ESTADO_20,
    FSM_ESTADO_21,
    FSM_ESTADO_22,
    FSM_ESTADO_23,
    FSM_ESTADO_24,
    FSM_ESTADO_25,
    FSM_ESTADO_26,
    FSM_ESTADO_27,
    FSM_ESTADO_28,
    FSM_ESTADO_29,
    FSM_ESTADO_30,
    FSM_ESTADO_31,
    FSM_ESTADO_MAX
} estado_fsm_e;

typedef enum
{
    FSM_EVENTO_0,
    FSM_EVENTO_1,
    FSM_EVENTO_MAX
} evento_fsm_e;

typedef struct
{
    estado_fsm_e desde;
    estado_fsm_e hasta;
    evento_fsm_e evento;
    void (*accion)(void *contexto);
} transicion_t;

typedef struct
{
    estado_fsm_e estado_actual;
    transicion_t transiciones[MAX_TRANSICIONES];
    int num_transiciones;
    void *contexto;
} maquina_estados_t;

/* Si inicial no es válido, deja la máquina inválida (estado FSM_ESTADO_MAX). */
void fsm_inicializar(maquina_estados_t *fsm, estado_fsm_e inicial);
/* Rechaza argumentos inválidos, tabla llena y pares (desde, evento) repetidos. */
bool fsm_agregar_transicion(maquina_estados_t *fsm, transicion_t trans);
/* Ejecuta la primera transición coincidente; false si no existe o hay error. */
bool fsm_procesar_evento(maquina_estados_t *fsm, evento_fsm_e evento);
/* Devuelve FSM_ESTADO_MAX si fsm es NULL o contiene un estado inválido. */
estado_fsm_e fsm_estado_actual(const maquina_estados_t *fsm);
/* Callback de ejemplo para probar la entrega del contexto. */
void fsm_incrementar_contexto(void *contexto);

#endif /* EJERCICIO_EJ_20_55_MOTOR_DE_FSM_H */
