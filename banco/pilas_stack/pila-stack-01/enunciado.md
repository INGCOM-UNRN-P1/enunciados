Implementar una pila de enteros con operaciones `push`, `pop`, `top` y verificación de `is_empty`.

### 📋 Contrato de las Funciones

```c
/*
 * Operación pila_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void pila_init(pila_t *p);

/*
 * Operación pila_push
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
void pila_push(pila_t *p, int val);

/*
 * Operación pila_pop
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int pila_pop(pila_t *p, int *out);

/*
 * Operación pila_free
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void pila_free(pila_t *p);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Apilado LIFO
```text
Operaciones: PUSH(1), PUSH(2), POP()
Salida: 2
```
:::
:::{tab-item} Tope de pila
```text
Operación: TOP()
Salida: 1
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
- La pila opera bajo política LIFO (Last-In, First-Out).
- Manejá el subdesbordamiento (underflow) cuando la pila esté vacía.
:::
