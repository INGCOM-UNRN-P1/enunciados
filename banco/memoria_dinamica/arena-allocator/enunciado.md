Implementar un asignador de memoria por región o bloques continuos (*arena_t Allocator*) en C.

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
void arena_init(arena_t *arena, size_t capacidad);

/*
 * Operación arena_reset
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void arena_reset(arena_t *arena);

/*
 * Operación arena_free
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void arena_free(arena_t *arena);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada dinámicamente debe ser validada y liberada de forma determinista sin generar fugas.
4. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante AddressSanitizer o Valgrind.

:::{hint} Consideraciones Didácticas
- Un arena_t Allocator pre-reserva un bloque contiguo de memoria y despacha punteros incrementando un offset.
- Para respetar la alineación de memoria a múltiplos de 8 bytes, ajustá el offset hacia arriba.
- El reseteo de la arena simplemente pone el offset en 0 sin hacer free() individual.
:::
