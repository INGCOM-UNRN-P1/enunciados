Implementar una estructura de Vector Dinámico para enteros con redimensionamiento automático.

Comandos:
- `PUSH <int>`: Agrega el valor al final del vector (duplicando capacidad si se llena).
- `POP`: Elimina y devuelve el último elemento. Imprime `VACIO` si no hay elementos.
- `GET <index>`: Devuelve el valor en la posición `<index>` o `FUERA_RANGO`.
- `SIZE`: Imprime `LEN: <longitud> | CAP: <capacidad>`.
- `CLEAR`: Vacía el vector reseteando su tamaño a 0.
- `EXIT`: Libera memoria y termina.

### 📋 Contrato de las Funciones

```c
/*
 * Operación vector_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void vector_init(VectorDinamico *vec);

/*
 * Operación vector_push
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
void vector_push(VectorDinamico *vec, int valor);

/*
 * Operación vector_pop
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void vector_pop(VectorDinamico *vec);

/*
 * Operación vector_get
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void vector_get(const VectorDinamico *vec, size_t index);

/*
 * Operación vector_free
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void vector_free(VectorDinamico *vec);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Operación típica
```text
ADD 10, ADD 20
Estructura con 2 elementos
```
:::
:::{tab-item} Colección vacía
```text
Consulta sobre estructura recién inicializada
Retorno seguro / estado vacío
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Iniciá con una capacidad inicial pequeña (ej. 4 elementos).
- Cuando `longitud == capacidad`, duplicá la capacidad: `nueva_capacidad = capacidad * 2` y usá `realloc()`.
- Si la longitud cae por debajo de `capacidad / 4`, podés reducir la capacidad.
:::
