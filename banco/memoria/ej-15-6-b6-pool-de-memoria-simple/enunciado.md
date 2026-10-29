Implementar un pool de memoria básico que preasigne un bloque grande y
distribuya bloques pequeños de tamaño fijo desde él.



```{code-block} c
:linenos:
typedef struct
{
    void *bloque_base;
    size_t tamano_total;
    size_t tamano_bloque;
    size_t bloques_usados;
    bool *mapa_uso;
} pool_t;
pool_t *pool_crear(size_t n_bloques, size_t tamano_bloque);
void *pool_alojar(pool_t *pool);
void pool_liberar(pool_t *pool, void *ptr);
void pool_destruir(pool_t *pool);
```

**Ventaja:** Reduce la fragmentación y overhead de múltiples `malloc`/`free`.

## Errores Comunes y Detección

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Pool de Memoria Simple
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ol_de_memoria_simple(int val);

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
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
