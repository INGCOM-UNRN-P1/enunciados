### Ejercicio 7.28 - Librería de Gestión de Estados y Banderas Booleanas ⭐⭐⭐⭐☆

Implementá `flags.h` y `flags.c` para gestionar conjuntos de opciones mediante arreglos booleanos:
- `void flag_activar(bool banderas[], size_t n, size_t indice)`: activa la bandera en la posición indicada.
- `void flag_desactivar(bool banderas[], size_t n, size_t indice)`: desactiva la bandera indicada.
- `bool flag_consultar(const bool banderas[], size_t n, size_t indice)`: consulta el estado de la bandera.
- `void flag_reiniciar_todas(bool banderas[], size_t n, bool valor_defecto)`: asigna un valor uniforme a todas las banderas.
- `size_t flag_contar_activas(const bool banderas[], size_t n)`: cuenta cuántas banderas están en `true`.

:::{hint} Lógica y Consideraciones
- Validá que `indice < n` antes de acceder a las posiciones del arreglo.
- **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` en `tests/` para verificar el correcto cambio de estado.
:::
<!-- {hint} Lógica y Consideraciones -->

---
