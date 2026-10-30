Implementar `int* fusionar(const int *a1, size_t n1, const int *a2, size_t n2)`.
**Algoritmo:**

1.  Reservar memoria para un nuevo arreglo de tamaño `n1 + n2`.
2.  Usar tres contadores: `i` para `a1`, `j` para `a2`, y `k` para el nuevo
    arreglo.
3.  Mientras `i < n1` y `j < n2`, comparar `a1[i]` y `a2[j]` y copiar el menor
    al nuevo arreglo, incrementando el contador correspondiente y `k`.
4.  Al salir del lazo, copiar los elementos restantes del arreglo que no se haya
    completado.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Fusión de Arreglos Ordenados
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_arreglos_ordenados(int val);

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
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::
