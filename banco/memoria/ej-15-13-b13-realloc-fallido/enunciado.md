Escribir una función que maneje correctamente el fallo de `realloc`:



```{code-block} c
:linenos:
bool vector_push(vector_t *v, int dato)
{
    if (v->size == v->capacity)
    {
        size_t nueva_capacidad = v->capacity * 2;
        int *nuevo_bloque = realloc(v->datos, nueva_capacidad * sizeof(int));
        if (nuevo_bloque == NULL)
        {
            return false; // Fallo, pero v->datos sigue válido
        }
        v->datos = nuevo_bloque;
        v->capacity = nueva_capacidad;
    }
    v->datos[v->size++] = dato;
    return true;
}
```

:::{important} Manejo de `realloc`

Nunca asignés directamente `ptr = realloc(ptr, size)`. Si falla, perdés el
puntero original y tenés un leak. Usá un puntero temporal como en el ejemplo.

:::

## Análisis de Rendimiento y Fragmentación

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Realloc Fallido
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__b13_realloc_fallido(int val);

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
