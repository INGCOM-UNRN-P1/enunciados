Diseñá la librería `vec_int.h` y `vec_int.c` para operar sobre arreglos estáticos de enteros:
- `void vec_int_imprimir(const int *v, size_t n)`
- `int vec_int_suma(const int *v, size_t n)`
- `double vec_int_promedio(const int *v, size_t n)`
- `ssize_t vec_int_buscar_primero(const int *v, size_t n, int elem)`
- `size_t vec_int_contar_ocurrencias(const int *v, size_t n, int elem)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Vectores de Enteros
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_vectores_de_entero(int val);

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
- Usá `ssize_t` para devolver `-1` cuando el elemento buscado no se encuentre.
:::
