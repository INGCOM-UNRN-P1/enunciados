# Validación de columnas

Implementá la siguiente interfaz declarada en `ej-20-47-validacion-de-columnas.h`:

```c
enum tipo_sql { SQL_INT, SQL_BIGINT, SQL_FLOAT, SQL_DOUBLE, SQL_VARCHAR, SQL_TEXT, SQL_DATE, SQL_DATETIME, SQL_BOOLEAN, SQL_BLOB };
enum constraint_sql { CONSTRAINT_NINGUNO=0, CONSTRAINT_NOT_NULL=1<<0, CONSTRAINT_UNIQUE=1<<1, CONSTRAINT_PRIMARY_KEY=1<<2, CONSTRAINT_FOREIGN_KEY=1<<3, CONSTRAINT_AUTO_INCREMENT=1<<4 };
typedef struct { char nombre[64]; enum tipo_sql tipo; unsigned int constraints; int longitud; } columna_t;

bool es_tipo_numerico(enum tipo_sql tipo);
bool es_tipo_texto(enum tipo_sql tipo);
bool constraints_validos(unsigned int constraints);
size_t tamanio_tipo(enum tipo_sql tipo);
```

El encabezado define enums autocontenidos. Numericos: INT, BIGINT, FLOAT, DOUBLE. Texto: VARCHAR y TEXT. `constraints_validos` rechaza bits desconocidos y PRIMARY_KEY combinado con FOREIGN_KEY. Los cuatro tipos AUTO_INCREMENT (INT, BIGINT, FLOAT, DOUBLE) son válidos? En este contrato sólo INT y BIGINT admiten AUTO_INCREMENT, pero al no recibir tipo la función valida únicamente bits y conflicto PK/FK. `tamanio_tipo` sigue la tabla documentada en ej-20-46 y da cero ante tipo inválido.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
