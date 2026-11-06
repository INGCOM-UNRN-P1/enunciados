# Planificador simple

Implementá la siguiente interfaz declarada en `ej-20-39-planificador-simple.h`:

```c
enum estado_proceso { PROCESO_NUEVO, PROCESO_LISTO, PROCESO_EJECUTANDO, PROCESO_BLOQUEADO, PROCESO_TERMINADO };
enum razon_bloqueo { BLOQ_IO, BLOQ_MUTEX, BLOQ_SEMAFORO, BLOQ_MENSAJE };
typedef struct { int pid; enum estado_proceso estado; enum razon_bloqueo razon; int prioridad; } proceso_t;

bool transicion_estado(proceso_t *proceso, enum estado_proceso nuevo_estado);
bool puede_ejecutar(const proceso_t *proceso);
```

El encabezado debe ser autocontenido e incluir los tipos indicados. Se permiten transiciones NUEVO→LISTO, LISTO→EJECUTANDO, EJECUTANDO→LISTO/BLOQUEADO/TERMINADO y BLOQUEADO→LISTO. Sólo se modifica el proceso si la transición está permitida y el proceso es válido. `puede_ejecutar` es verdadero sólo para un proceso válido en estado LISTO.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
