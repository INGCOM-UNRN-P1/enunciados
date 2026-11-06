# Motor genérico de FSM

Implementá el motor que ejecuta una máquina de estados finitos usando una tabla de transiciones y callbacks. Conservá estos tipos: `estado_fsm_e`, `evento_fsm_e`, `transicion_t` y `maquina_estados_t`. La máquina admite 32 estados (`FSM_ESTADO_0` a `FSM_ESTADO_31`) y hasta `MAX_TRANSICIONES` registros.

```c
void fsm_inicializar(maquina_estados_t *fsm, estado_fsm_e inicial);
bool fsm_agregar_transicion(maquina_estados_t *fsm, transicion_t trans);
bool fsm_procesar_evento(maquina_estados_t *fsm, evento_fsm_e evento);
estado_fsm_e fsm_estado_actual(const maquina_estados_t *fsm);
```

`fsm_inicializar` vacía la tabla y deja el estado en `FSM_ESTADO_MAX` si el puntero es nulo o el estado inicial no es válido (si el puntero no es nulo). `fsm_agregar_transicion` devuelve `false` para máquina inválida, estados/eventos fuera de rango, tabla llena o un par `desde`/`evento` ya registrado. `fsm_procesar_evento` busca una transición cuyo origen sea el estado actual y cuyo evento coincida; si la encuentra, ejecuta primero su callback opcional con `fsm->contexto`, actualiza al estado destino y devuelve `true`. Si no hay coincidencia o los argumentos/tabla son inválidos, devuelve `false` y conserva el estado. `fsm_estado_actual` devuelve `FSM_ESTADO_MAX` para un puntero nulo o estado inválido.

El contexto se asigna directamente en el campo público `fsm->contexto` después de inicializar la máquina.

El tipo declara 32 estados y dos eventos, por lo que la tabla puede contener hasta 64 pares origen/evento distintos.
