Manejar un arreglo dinámico de cadenas (`char **lista`) donde cada elemento es
una cadena independiente en heap.

- `lista_cadenas_crear(void)`: retorna un `char **` apuntando a un arreglo vacío
  (o `NULL`).
- `lista_cadenas_agregar(char ***lista, size_t *cantidad, const char *cadena)`:
  duplica la cadena y la agrega al final, redimensionando con `realloc`.
- `lista_cadenas_destruir(char **lista, size_t cantidad)`: libera cada cadena y
  luego el arreglo.

```{dibu}
:caption: Una lista con `cantidad = 3` después de agregar `"sol"`, `"de"` y `"mayo"`: `lista` apunta a un arreglo de `char *` y cada cadena es una copia propia en el heap, terminada en `'\0'`. `lista_cadenas_destruir` libera primero cada cadena y después el arreglo.
type: matrix
variant: jagged
name: lista
elementType: char
values: [["s", "o", "l"], ["d", "e"], ["m", "a", "y", "o"]]
sentinel: "'\\0'"
showLengths: false
```

> [!NOTE] `char **` es el tipo de `argv` en `main(int argc, char **argv)`. Este
> ejercicio generaliza ese patrón.

### 📋 Contrato de las Funciones

El programa debe estructurarse modularmente dividiendo las responsabilidades en funciones auxiliares claramente documentadas con pre y postcondiciones.

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
2. **Gestión de memoria:** Toda memoria solicitada dinámicamente debe ser validada y liberada de forma determinista sin generar fugas.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante AddressSanitizer o Valgrind.
