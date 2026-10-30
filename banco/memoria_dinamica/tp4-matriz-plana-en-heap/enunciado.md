Simular una matriz de `filas × columnas` enteros usando un único bloque contiguo
`int *`, donde el elemento `(i, j)` se accede como `bloque[i * columnas + j]`.

- `crear_matriz_plana(size_t filas, size_t columnas)`: reserva el bloque en
  heap, inicializado en cero.
- `obtener_celda(const int *m, size_t columnas, size_t fila, size_t col)`:
  retorna el valor de la celda.
- `asignar_celda(int *m, size_t columnas, size_t fila, size_t col, int valor)`:
  escribe el valor.
- `liberar_matriz_plana(int *m)`: libera el bloque.

> [!NOTE] Este ejercicio es el precursor conceptual de `libmatrices` del TP7,
> donde se agrega una capa de punteros de fila (`int **filas`) para permitir
> notación `m[i][j]`.

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
