Implementar una cola circular (Ring Buffer) con operaciones `enqueue`, `dequeue` y verificación de `is_full` y `is_empty`.

### 📋 Contrato de las Funciones

```c
/*
 * Operación cola_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void cola_init(cola_circular_t *c);

/*
 * Operación cola_enqueue
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int cola_enqueue(cola_circular_t *c, int val);

/*
 * Operación cola_dequeue
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int cola_dequeue(cola_circular_t *c, int *out);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Encolar y Desencolar
```text
Operaciones: PUSH(42), PUSH(84), POP()
Salida: 42
```
:::
:::{tab-item} Consulta estado vacío
```text
Operación: IS_EMPTY()
Salida: true
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada dinámicamente debe ser validada y liberada de forma determinista sin generar fugas.
4. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante AddressSanitizer o Valgrind.

:::{hint} Consideraciones Didácticas
- La cola opera bajo política FIFO (First-In, First-Out).
- Usá el operador módulo % para avanzar los índices circularmente.
:::
