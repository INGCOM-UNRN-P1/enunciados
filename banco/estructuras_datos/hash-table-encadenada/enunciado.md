Implementar una tabla Hash en C que almacene pares clave-valor (cadenas de texto a enteros) utilizando una matriz de punteros a listas enlazadas para resolver colisiones por encadenamiento (*chaining*).

El programa debe leer comandos por entrada estándar:
- `INSERT <clave> <valor>`: Inserta el par clave-valor. Si la clave ya existe, actualiza su valor.
- `GET <clave>`: Busca la clave e imprime su valor entero asociado, o `NO_ENCONTRADO` si no existe.
- `DELETE <clave>`: Elimina la clave y libera la memoria del nodo. Imprime `ELIMINADO` o `NO_ENCONTRADO`.
- `EXIT`: Libera toda la memoria y termina el programa limpiamente.

- **Entrada (`stdin`):** Secuencia de comandos línea por línea.
- **Salida (`stdout`):** Resultados correspondientes a cada operación solicitada.

### 📋 Contrato de las Funciones

```c
/*
 * Operación funcion_hash_djb2
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
unsigned long funcion_hash_djb2(const char *str);

/*
 * Operación inicializar_tabla
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void inicializar_tabla(TablaHash *tabla);

/*
 * Operación insertar_o_actualizar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
void insertar_o_actualizar(TablaHash *tabla, const char *clave, int valor);

/*
 * Operación buscar_clave
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void buscar_clave(const TablaHash *tabla, const char *clave);

/*
 * Operación eliminar_clave
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void eliminar_clave(TablaHash *tabla, const char *clave);

/*
 * Operación destruir_tabla
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void destruir_tabla(TablaHash *tabla);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Operación típica
```text
ADD 10, ADD 20
Estructura con 2 elementos
```
:::
:::{tab-item} Colección vacía
```text
Consulta sobre estructura recién inicializada
Retorno seguro / estado vacío
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Usá la función hash djb2: hash = ((hash << 5) + hash) + c iterando sobre los caracteres de la clave.
- Cada entrada de la tabla hash debe contener un puntero a una lista enlazada simple de nodos (clave, valor, siguiente).
- Recordá liberar tanto los nodos como las copias de las cadenas al destruir la tabla para evitar memory leaks.
:::
