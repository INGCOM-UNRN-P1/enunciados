# Gestor de transacciones

Implementá la siguiente interfaz declarada en `ej-20-45-gestor-de-transacciones.h`:

```c
enum estado_transaccion { TX_INICIADA, TX_ACTIVA, TX_PREPARADA, TX_COMPROMETIDA, TX_ABORTADA };
enum tipo_aislamiento { AISLAMIENTO_READ_UNCOMMITTED, AISLAMIENTO_READ_COMMITTED, AISLAMIENTO_REPEATABLE_READ, AISLAMIENTO_SERIALIZABLE };
typedef struct { unsigned long id; enum estado_transaccion estado; enum tipo_aislamiento aislamiento; int num_operaciones; } transaccion_t;

transaccion_t iniciar_transaccion(enum tipo_aislamiento aislamiento);
bool commit_transaccion(transaccion_t *tx);
bool rollback_transaccion(transaccion_t *tx);
bool puede_hacer_commit(const transaccion_t *tx);
```

El encabezado define de forma autocontenida los tipos del ejercicio anterior. Iniciar acepta un aislamiento válido y devuelve transacción con id no cero, estado ACTIVA y cero operaciones; aislamiento inválido produce id cero e INICIADA. Se puede hacer commit sólo en ACTIVA o PREPARADA. Commit cambia a COMPROMETIDA si se puede; rollback cambia cualquier transacción válida no terminal a ABORTADA. Operaciones no permitidas dejan el objeto intacto.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
