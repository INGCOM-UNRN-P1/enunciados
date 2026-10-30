Escribir un programa que demuestre fragmentación externa:



```{code-block} c
:linenos:
#define N 1000
int main()
{
    void *ptrs[N];
    // Alojar muchos bloques pequeños
    for (int i = 0; i < N; i++)
    {
        ptrs[i] = malloc(64);
    }
    // Liberar bloques alternados
    for (int i = 0; i < N; i += 2)
    {
        free(ptrs[i]);
        ptrs[i] = NULL;
    }
    // Intentar alojar un bloque grande
    void *grande = malloc(64 * (N / 2));
    if (grande == NULL)
    {
        printf("No se pudo alojar bloque grande debido a fragmentación\n");
    }
    else
    {
        printf("Bloque grande asignado exitosamente\n");
        free(grande);
    }
    // Liberar bloques restantes
    for (int i = 1; i < N; i += 2)
    {
        free(ptrs[i]);
    }
    return 0;
}
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Fragmentación Externa
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ragmentacion_externa(int val);

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
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
