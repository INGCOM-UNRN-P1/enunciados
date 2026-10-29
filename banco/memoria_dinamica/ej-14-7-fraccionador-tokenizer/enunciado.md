Implementar `char** dividir_cadena(const char *s, int *n_palabras)`. Esta
función devuelve un arreglo de punteros, donde cada puntero apunta a una palabra
alojada dinámicamente.



:::{mermaid}

flowchart TD
    subgraph Heap
        H["Hola"]
        M["Mundo"]
    end
    subgraph "Arreglo de Punteros"
        P1["ptr[0]"]
        P2["ptr[1]"]
        P3["ptr[2]"]
    end
    Main["char** resultado"] --> P1
    P1 --> H
    P2 --> M
    P3 --> NUL["NULL"]

:::

**Algoritmo:**

1.  Contar el número de palabras para saber el tamaño del arreglo `char**`.
2.  Reservar memoria para este arreglo de punteros.
3.  Volver a recorrer la cadena original. Por cada palabra encontrada: a.
    Calcular su longitud. b. Reservar memoria para esa palabra. c. Copiar los
    caracteres de la palabra. d. Asignar el puntero a la nueva palabra en el
    arreglo de punteros.
4.  Terminar el arreglo de punteros con un `NULL` para facilitar su recorrido.

## Matrices Dinámicas

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Fraccionador (Tokenizer)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_accionador_tokenizer(int val);

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
