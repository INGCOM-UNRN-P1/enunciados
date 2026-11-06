#ifndef EJ20_54_H
#define EJ20_54_H
#include <stdbool.h>
typedef enum { FSM_ESTADO_0, FSM_ESTADO_1, FSM_ESTADO_2, FSM_ESTADO_MAX } estado_fsm_e;
typedef enum { FSM_EVENTO_0, FSM_EVENTO_1, FSM_EVENTO_MAX } evento_fsm_e;
typedef struct { estado_fsm_e desde,hasta; evento_fsm_e evento; void (*accion)(void *); } transicion_t;
typedef struct { estado_fsm_e estado_actual; transicion_t transiciones[64]; int num_transiciones; void *contexto; } maquina_estados_t;
bool fsm_inicializar(maquina_estados_t *m, estado_fsm_e inicial, void *contexto);
bool fsm_agregar_transicion(maquina_estados_t *m, transicion_t t);
bool fsm_procesar(maquina_estados_t *m, evento_fsm_e e);
#endif
