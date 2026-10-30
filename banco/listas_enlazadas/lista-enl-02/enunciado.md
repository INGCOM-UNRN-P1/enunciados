Invertir el encadenamiento de una lista simplemente enlazada modificando únicamente los punteros siguientes sin asignar memoria adicional.

### 📋 Contrato de las Funciones

```c
/*
 * Operación imprimir_y_liberar
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void imprimir_y_liberar(nodo_t *cabeza);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Inserción ordenada
```text
Operaciones: INSERT(15), INSERT(7), INSERT(23)
Lista: [7, 15, 23]
```
:::
:::{tab-item} Eliminación de nodo
```text
Operación: DELETE(15)
Lista: [7, 23]
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
- Verificá siempre el caso base de lista vacía (cabeza == NULL).
- Liberá cada nodo con free() al terminar.
:::
