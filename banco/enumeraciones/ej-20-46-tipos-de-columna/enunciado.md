Modelar tipos de datos SQL y sus propiedades.



```{code-block} c
:linenos:
enum tipo_sql
{
    SQL_INT,
    SQL_BIGINT,
    SQL_FLOAT,
    SQL_DOUBLE,
    SQL_VARCHAR,
    SQL_TEXT,
    SQL_DATE,
    SQL_DATETIME,
    SQL_BOOLEAN,
    SQL_BLOB
};
enum constraint_sql
{
    CONSTRAINT_NINGUNO = 0,
    CONSTRAINT_NOT_NULL = 1 << 0,
    CONSTRAINT_UNIQUE = 1 << 1,
    CONSTRAINT_PRIMARY_KEY = 1 << 2,
    CONSTRAINT_FOREIGN_KEY = 1 << 3,
    CONSTRAINT_AUTO_INCREMENT = 1 << 4
};
typedef struct
{
    char nombre[64];
    enum tipo_sql tipo;
    unsigned int constraints;
    int longitud; // Para VARCHAR
} columna_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Tipos de columna
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__46_tipos_de_columna(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
