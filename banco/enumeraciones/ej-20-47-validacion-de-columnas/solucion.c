#include "ej-20-47-validacion-de-columnas.h"
bool es_tipo_numerico(enum tipo_sql t){return t==SQL_INT||t==SQL_BIGINT||t==SQL_FLOAT||t==SQL_DOUBLE;}
bool es_tipo_texto(enum tipo_sql t){return t==SQL_VARCHAR||t==SQL_TEXT;}
bool constraints_validos(unsigned int c){unsigned k=(1u<<5)-1u;return !(c&~k)&&!((c&CONSTRAINT_PRIMARY_KEY)&&(c&CONSTRAINT_FOREIGN_KEY));}
size_t tamanio_tipo(enum tipo_sql t){switch(t){case SQL_INT:return sizeof(int);case SQL_BIGINT:return sizeof(long long);case SQL_FLOAT:return sizeof(float);case SQL_DOUBLE:return sizeof(double);case SQL_VARCHAR:case SQL_TEXT:return sizeof(char*);case SQL_DATE:case SQL_DATETIME:return sizeof(int);case SQL_BOOLEAN:return sizeof(bool);case SQL_BLOB:return sizeof(void*);default:return 0;}}
