#include "ej-20-45-gestor-de-transacciones.h"
bool transaccion_valida(const transaccion_t *t){return t&&t->id!=0&&t->estado>=TX_INICIADA&&t->estado<=TX_ABORTADA&&t->aislamiento>=AISLAMIENTO_READ_UNCOMMITTED&&t->aislamiento<=AISLAMIENTO_SERIALIZABLE&&t->num_operaciones>=0;}
#include <limits.h>
static unsigned long next_id=1;
transaccion_t iniciar_transaccion(enum tipo_aislamiento a){transaccion_t t={0,TX_INICIADA,a,0};if(a<AISLAMIENTO_READ_UNCOMMITTED||a>AISLAMIENTO_SERIALIZABLE||next_id==0)return t;t.id=next_id++;t.estado=TX_ACTIVA;return t;}
bool puede_hacer_commit(const transaccion_t *t){return transaccion_valida(t)&&(t->estado==TX_ACTIVA||t->estado==TX_PREPARADA);}
bool commit_transaccion(transaccion_t *t){if(!puede_hacer_commit(t))return false;t->estado=TX_COMPROMETIDA;return true;}
bool rollback_transaccion(transaccion_t *t){if(!transaccion_valida(t)||t->estado==TX_COMPROMETIDA||t->estado==TX_ABORTADA)return false;t->estado=TX_ABORTADA;return true;}
