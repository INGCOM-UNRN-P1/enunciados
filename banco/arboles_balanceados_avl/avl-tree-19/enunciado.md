Implementar y verificar las operaciones correspondientes a **Árbol AVL con Conteo de Tamaño de Subárbol para Selección por Rango** en un árbol binario balanceado por altura (Árbol AVL).
La implementación debe asegurar que para cada nodo del árbol, las alturas de sus subárboles izquierdo y derecho difieran a lo sumo en una unidad ($|FB| \le 1$), reestructurando punteros mediante rotaciones simples o dobles según corresponda y manteniendo actualizadas las alturas locales.

- `int ejecutar_avl_tree_19(int val)`: Procesa el flujo principal de Árbol AVL con Conteo de Tamaño de Subárbol para Selección por Rango

- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 25 minutos (Nivel Bloom 3).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Árbol AVL con Conteo de Tamaño de Subárbol para Selección por Rango
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_avl_tree_19(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
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
- El factor de balance debe ser -1, 0 o +1 en todos los nodos.
- Rotación simple si el desbalance es en la misma dirección; doble si es en zig-zag.
:::
