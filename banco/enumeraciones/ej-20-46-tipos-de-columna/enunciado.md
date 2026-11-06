# Tipos de columna

Implementá la siguiente interfaz declarada en `ej-20-46-tipos-de-columna.h`:

```c
enum tipo_sql { SQL_INT, SQL_BIGINT, SQL_FLOAT, SQL_DOUBLE, SQL_VARCHAR, SQL_TEXT, SQL_DATE, SQL_DATETIME, SQL_BOOLEAN, SQL_BLOB };
enum constraint_sql { CONSTRAINT_NINGUNO=0, CONSTRAINT_NOT_NULL=1<<0, CONSTRAINT_UNIQUE=1<<1, CONSTRAINT_PRIMARY_KEY=1<<2, CONSTRAINT_FOREIGN_KEY=1<<3, CONSTRAINT_AUTO_INCREMENT=1<<4 };
typedef struct { char nombre[64]; enum tipo_sql tipo; unsigned int constraints; int longitud; } columna_t;
size_t tamanio_tipo(enum tipo_sql tipo);
bool columna_valida(const columna_t *columna);
```

` tamanio_tipo` devuelve `sizeof(int)`, `sizeof(long long)`, `sizeof(float)`, `sizeof(double)`, `sizeof(char *)`, `sizeof(char *)`, `sizeof(int)`, `sizeof(int)`, `sizeof(bool)` o `sizeof(void *)`, en el orden de los tipos; devuelve cero para tipo inválido. Una columna válida requiere nombre no vacío terminado dentro del arreglo, tipo válido, restricciones conocidas sin PRIMARY_KEY junto con FOREIGN_KEY, y longitud positiva sólo para VARCHAR (en los demás tipos debe ser cero). AUTO_INCREMENT sólo se admite en INT o BIGINT.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
