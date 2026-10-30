Implementar Union-Find para gestionar conjuntos disjuntos y consultar conectividad entre elementos.

### 📋 Contrato de las Funciones

```c
/*
 * Operación dsu_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void dsu_init(dsu_t *d, int n);

/*
 * Operación dsu_find
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int dsu_find(dsu_t *d, int u);

/*
 * Operación dsu_union
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void dsu_union(dsu_t *d, int u, int v);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Conexión de componentes
```text
Operaciones: UNION(0, 1), UNION(1, 2)
Componente {0, 1, 2} unificada
```
:::
:::{tab-item} Consulta de conectividad
```text
Operación: FIND(0) == FIND(2)
Salida: true
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Aplicá compresión de caminos en find para aplanar el árbol.
- Uní por rango o tamaño para mantener los árboles balanceados.
:::
