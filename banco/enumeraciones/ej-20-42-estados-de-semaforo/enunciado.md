# Estados de semáforo

Implementá la siguiente interfaz declarada en `ej-20-42-estados-de-semaforo.h`:

```c
enum estado_semaforo { SEMAFORO_ROJO, SEMAFORO_AMARILLO, SEMAFORO_VERDE, SEMAFORO_INTERMITENTE };
enum direccion_trafico { DIR_NORTE_SUR, DIR_ESTE_OESTE, DIR_TODAS };
typedef struct { enum estado_semaforo estado; enum direccion_trafico direccion_activa; int tiempo_restante; } semaforo_t;
bool semaforo_valido(const semaforo_t *semaforo);
```

Un semáforo es válido si no es NULL, el estado y la dirección están declarados y el tiempo restante es no negativo. `DIR_TODAS` es una dirección válida para el modelo, pero no habilita el paso mientras haya un único estado compartido.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
