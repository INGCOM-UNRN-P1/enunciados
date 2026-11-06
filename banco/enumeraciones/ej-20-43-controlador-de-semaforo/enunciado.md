# Controlador de semáforo

Implementá la siguiente interfaz declarada en `ej-20-43-controlador-de-semaforo.h`:

```c
enum estado_semaforo { SEMAFORO_ROJO, SEMAFORO_AMARILLO, SEMAFORO_VERDE, SEMAFORO_INTERMITENTE };
enum direccion_trafico { DIR_NORTE_SUR, DIR_ESTE_OESTE, DIR_TODAS };
typedef struct { enum estado_semaforo estado; enum direccion_trafico direccion_activa; int tiempo_restante; } semaforo_t;

void actualizar_semaforo(semaforo_t *semaforo);
enum estado_semaforo siguiente_estado(enum estado_semaforo actual);
bool puede_pasar(const semaforo_t *semaforo, enum direccion_trafico direccion);
```

El encabezado define de forma autocontenida los tipos del ejercicio anterior. La secuencia es ROJO→VERDE→AMARILLO→ROJO y el intermitente permanece intermitente; estados inválidos producen ROJO. Actualizar ignora NULL, inválidos y tiempo positivo; al llegar el tiempo a cero avanza el estado. Se puede pasar sólo con semáforo válido, tiempo cero, estado VERDE y dirección activa igual a la consultada (nunca `DIR_TODAS` ni una dirección inválida).

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
