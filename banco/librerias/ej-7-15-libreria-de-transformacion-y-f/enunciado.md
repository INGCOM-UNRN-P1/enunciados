Diseñá `array_utils.h` y `array_utils.c` para procesar secuencias numéricas mediante funciones modulares:
- `size_t arr_filtrar_pares(const int *src, size_t n, int *dest)`: copia solo los valores pares a `dest` y retorna la cantidad colocada.
- `size_t arr_filtrar_mayores_que(const int *src, size_t n, int umbral, int *dest)`: copia solo los valores mayores que `umbral`.
- `void arr_escalar(int *v, size_t n, int factor)`: multiplica cada elemento del arreglo por un factor escalar.
- `long long arr_sumatoria(const int *v, size_t n)`: calcula la suma total de los elementos.


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Transformación y Filtrado de Arreglos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_transformacion_y_f(int val);

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
- Utilizá el calificador `const` en los arreglos de solo lectura y documentá precondiciones claras para cada función.
- Escribir pruebas unitarias con `assert()` en `tests/` para verificar arreglos vacíos y con valores negativos.
:::
