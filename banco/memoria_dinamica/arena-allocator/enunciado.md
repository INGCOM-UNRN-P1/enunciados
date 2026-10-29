Implementar un asignador de memoria por región o bloques continuos (*Arena Allocator*) en C.

Estructura requerida:
- Pre-reserva un búfer de tamaño fijo $B$.
- Soporta asignaciones consecutivas con alineación a 8 bytes.
- Soporta `RESET` (pone el contador de bytes usados en 0 sin liberar el bloque base).
- Reporta estadísticas de memoria usada y capacidad restante.

Comandos:
- `INIT <capacidad_bytes>`: Inicializa la arena con la capacidad solicitada.
- `ALLOC <bytes>`: Asigna un bloque de tamaño `<bytes>` con alineación a 8 bytes. Imprime `OK offset=<offset>` o `FALLO` si no hay espacio.
- `STATS`: Imprime `USADO: <usado> / RESTANTE: <restante>`.
- `RESET`: Reinicia el puntero de asignación a 0. Imprime `ARENA_RESETEADA`.
- `EXIT`: Destruye la arena y finaliza.

### 📋 Contrato de las Funciones

```c
/*
 * Operación arena_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void arena_init(Arena *arena, size_t capacidad);

/*
 * Operación arena_reset
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void arena_reset(Arena *arena);

/*
 * Operación arena_free
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void arena_free(Arena *arena);

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
- Un Arena Allocator pre-reserva un bloque contiguo de memoria y despacha punteros incrementando un offset.
- Para respetar la alineación de memoria a múltiplos de 8 bytes, ajustá el offset hacia arriba.
- El reseteo de la arena simplemente pone el offset en 0 sin hacer free() individual.
:::
