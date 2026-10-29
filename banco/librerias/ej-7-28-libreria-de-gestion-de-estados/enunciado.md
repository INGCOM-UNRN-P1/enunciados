Implementá `flags.h` y `flags.c` para gestionar conjuntos de opciones mediante arreglos booleanos:
- `void flag_activar(bool banderas[], size_t n, size_t indice)`: activa la bandera en la posición indicada.
- `void flag_desactivar(bool banderas[], size_t n, size_t indice)`: desactiva la bandera indicada.
- `bool flag_consultar(const bool banderas[], size_t n, size_t indice)`: consulta el estado de la bandera.
- `void flag_reiniciar_todas(bool banderas[], size_t n, bool valor_defecto)`: asigna un valor uniforme a todas las banderas.
- `size_t flag_contar_activas(const bool banderas[], size_t n)`: cuenta cuántas banderas están en `true`.


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Gestión de Estados y Banderas Booleanas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_gestion_de_estados(int val);

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
- Validá que `indice < n` antes de acceder a las posiciones del arreglo.
- Escribir pruebas unitarias con `assert()` en `tests/` para verificar el correcto cambio de estado.
:::
