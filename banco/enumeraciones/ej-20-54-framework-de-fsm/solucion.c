#define MAX_ESTADOS 32
#define MAX_TRANSICIONES 64
typedef enum
{
    FSM_ESTADO_0,
    FSM_ESTADO_1,
    FSM_ESTADO_2,
    // ... más estados
    FSM_ESTADO_MAX
} estado_fsm_e;
typedef enum
{
    FSM_EVENTO_0,
    FSM_EVENTO_1,
    // ... más eventos
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


int proc__54_framework_de_fsm(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}