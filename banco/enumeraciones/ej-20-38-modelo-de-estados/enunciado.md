# Modelo de estados

Implementá la siguiente interfaz declarada en `ej-20-38-modelo-de-estados.h`:

```c
enum estado_proceso { PROCESO_NUEVO, PROCESO_LISTO, PROCESO_EJECUTANDO, PROCESO_BLOQUEADO, PROCESO_TERMINADO };
enum razon_bloqueo { BLOQ_IO, BLOQ_MUTEX, BLOQ_SEMAFORO, BLOQ_MENSAJE };
typedef struct { int pid; enum estado_proceso estado; enum razon_bloqueo razon; int prioridad; } proceso_t;
bool proceso_valido(const proceso_t *proceso);
const char *estado_proceso_a_string(enum estado_proceso estado);
```

Un proceso válido tiene `pid > 0`, prioridad no negativa, estado declarado y, si está bloqueado, razón declarada. Para estados no bloqueados la razón se ignora. El conversor devuelve `nuevo`, `listo`, `ejecutando`, `bloqueado`, `terminado` o `desconocido` para estado inválido.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
