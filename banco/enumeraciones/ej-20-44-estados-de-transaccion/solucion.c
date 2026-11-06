#include "ej-20-44-estados-de-transaccion.h"
bool transaccion_valida(const transaccion_t *t){return t&&t->id!=0&&t->estado>=TX_INICIADA&&t->estado<=TX_ABORTADA&&t->aislamiento>=AISLAMIENTO_READ_UNCOMMITTED&&t->aislamiento<=AISLAMIENTO_SERIALIZABLE&&t->num_operaciones>=0;}
bool transicion_transaccion_valida(enum estado_transaccion a,enum estado_transaccion b){return (a==TX_INICIADA&&(b==TX_ACTIVA||b==TX_ABORTADA))||(a==TX_ACTIVA&&(b==TX_PREPARADA||b==TX_ABORTADA))||(a==TX_PREPARADA&&(b==TX_COMPROMETIDA||b==TX_ABORTADA));}
