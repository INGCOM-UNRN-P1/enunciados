Comparar el rendimiento de acceso secuencial vs. aleatorio en un arreglo grande:



```{code-block} c
:linenos:
#define SIZE (100 * 1024 * 1024) // 100M enteros
int main()
{
    int *arr = malloc(SIZE * sizeof(int));
    // Secuencial
    clock_t inicio = clock();
    for (size_t i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
    clock_t fin = clock();
    printf("Secuencial: %.3f ms\n", 1000.0 * (fin - inicio) / CLOCKS_PER_SEC);
    // Aleatorio
    inicio = clock();
    for (size_t i = 0; i < SIZE; i++)
    {
        size_t idx = rand() % SIZE;
        arr[idx] = i;
    }
    fin = clock();
    printf("Aleatorio: %.3f ms\n", 1000.0 * (fin - inicio) / CLOCKS_PER_SEC);
    free(arr);
    return 0;
}
```

**Observación esperada:** El acceso secuencial será significativamente más
rápido debido a mejor locality y uso del caché.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Cache Locality
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_6_b16_cache_locality(int val);

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
