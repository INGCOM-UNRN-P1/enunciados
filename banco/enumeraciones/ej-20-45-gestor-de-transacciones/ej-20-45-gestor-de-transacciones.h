#ifndef EJERCICIO_EJ_20_45_H
#define EJERCICIO_EJ_20_45_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum estado_transaccion { TX_INICIADA, TX_ACTIVA, TX_PREPARADA, TX_COMPROMETIDA, TX_ABORTADA };
enum tipo_aislamiento { AISLAMIENTO_READ_UNCOMMITTED, AISLAMIENTO_READ_COMMITTED, AISLAMIENTO_REPEATABLE_READ, AISLAMIENTO_SERIALIZABLE };
typedef struct { unsigned long id; enum estado_transaccion estado; enum tipo_aislamiento aislamiento; int num_operaciones; } transaccion_t;

transaccion_t iniciar_transaccion(enum tipo_aislamiento aislamiento);
bool commit_transaccion(transaccion_t *tx);
bool rollback_transaccion(transaccion_t *tx);
bool puede_hacer_commit(const transaccion_t *tx);

#endif
