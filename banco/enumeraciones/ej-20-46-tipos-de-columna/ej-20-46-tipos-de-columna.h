#ifndef EJERCICIO_EJ_20_46_H
#define EJERCICIO_EJ_20_46_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum tipo_sql { SQL_INT, SQL_BIGINT, SQL_FLOAT, SQL_DOUBLE, SQL_VARCHAR, SQL_TEXT, SQL_DATE, SQL_DATETIME, SQL_BOOLEAN, SQL_BLOB };
enum constraint_sql { CONSTRAINT_NINGUNO=0, CONSTRAINT_NOT_NULL=1<<0, CONSTRAINT_UNIQUE=1<<1, CONSTRAINT_PRIMARY_KEY=1<<2, CONSTRAINT_FOREIGN_KEY=1<<3, CONSTRAINT_AUTO_INCREMENT=1<<4 };
typedef struct { char nombre[64]; enum tipo_sql tipo; unsigned int constraints; int longitud; } columna_t;
size_t tamanio_tipo(enum tipo_sql tipo);
bool columna_valida(const columna_t *columna);

#endif
