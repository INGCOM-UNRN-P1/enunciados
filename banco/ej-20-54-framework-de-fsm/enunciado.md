### Ejercicio 20.54 - Framework de FSM ⭐⭐☆☆☆

Implementar un framework genérico para máquinas de estados finitas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
#define MAX_ESTADOS 32
#define MAX_TRANSICIONES 64
typedef enum
{
    FSM_ESTADO_0,
    FSM_ESTADO_1,
    FSM_ESTADO_2,
    // ... más estados
    FSM_ESTADO_MAX
} estado_fsm_t;
typedef enum
{
    FSM_EVENTO_0,
    FSM_EVENTO_1,
    // ... más eventos
    FSM_EVENTO_MAX
} evento_fsm_t;
typedef struct
{
    estado_fsm_t desde;
    estado_fsm_t hasta;
    evento_fsm_t evento;
    void (*accion)(void *contexto);
} transicion_t;
typedef struct
{
    estado_fsm_t estado_actual;
    transicion_t transiciones[MAX_TRANSICIONES];
    int num_transiciones;
    void *contexto;
} maquina_estados_t;
```
<!-- {code-block} c -->
