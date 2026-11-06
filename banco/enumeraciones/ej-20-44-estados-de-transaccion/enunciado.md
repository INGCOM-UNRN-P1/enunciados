# Estados de transacción

Implementá la siguiente interfaz declarada en `ej-20-44-estados-de-transaccion.h`:

```c
enum estado_transaccion { TX_INICIADA, TX_ACTIVA, TX_PREPARADA, TX_COMPROMETIDA, TX_ABORTADA };
enum tipo_aislamiento { AISLAMIENTO_READ_UNCOMMITTED, AISLAMIENTO_READ_COMMITTED, AISLAMIENTO_REPEATABLE_READ, AISLAMIENTO_SERIALIZABLE };
typedef struct { unsigned long id; enum estado_transaccion estado; enum tipo_aislamiento aislamiento; int num_operaciones; } transaccion_t;
bool transaccion_valida(const transaccion_t *tx);
bool transicion_transaccion_valida(enum estado_transaccion actual, enum estado_transaccion siguiente);
```

La transacción es válida si no es NULL, id distinto de cero, estado y aislamiento declarados, y operaciones no negativas. Transiciones admitidas: INICIADA→ACTIVA/ABORTADA; ACTIVA→PREPARADA/ABORTADA; PREPARADA→COMPROMETIDA/ABORTADA. Ninguna transición sale de un estado terminal. Estados inválidos no permiten transición.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
