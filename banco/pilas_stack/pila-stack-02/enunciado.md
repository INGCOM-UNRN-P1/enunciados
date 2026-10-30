Verificar si una expresión que contiene `()`, `[]` y `{}` está correctamente balanceada utilizando una pila.

### 📋 Contrato de las Funciones

```c
/*
 * Operación coincide
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int coincide(char apertura, char cierre);

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
2. **Gestión de memoria:** Toda memoria solicitada dinámicamente debe ser validada y liberada de forma determinista sin generar fugas.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
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
