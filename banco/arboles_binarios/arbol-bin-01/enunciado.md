Construir un árbol binario y mostrar los elementos según los recorridos en profundidad (Inorder, Preorder, Postorder).

### 📋 Contrato de las Funciones

```c
/*
 * Operación inorder
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void inorder(const nodo_arbol_t *n);

/*
 * Operación liberar_arbol
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void liberar_arbol(nodo_arbol_t *n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Inserción secuencial
```text
Operaciones: INSERT(10), INSERT(20), INSERT(5)
Estado: Estructura balanceada, raíz = 10
```
:::
:::{tab-item} Búsqueda en árbol
```text
Operación: CONTAINS(20)
Salida: true / 1
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
- Un nodo hoja es aquel cuyos punteros izquierdo y derecho son NULL.
- Usá recursión para recorrer subárboles izquierdo y derecho.
:::
