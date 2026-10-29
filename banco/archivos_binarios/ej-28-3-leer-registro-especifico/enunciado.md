### Ejercicio 28.3 - Leer Registro Específico ⭐⭐☆☆☆

Implementar una función `producto_t leer_registro(int n)` que lea y devuelva el
`n`-ésimo registro del archivo `inventario.dat` sin leer los registros
anteriores.

**Lógica y Consideraciones:**
- **Posicionamiento**: Utilizar `fseek` para mover el puntero del archivo
  directamente a la posición deseada. La posición se calcula como `n *
  sizeof(producto_t)`.
- **Origen**: El desplazamiento debe hacerse desde el inicio del archivo
  (`SEEK_SET`).
- **Lectura**: Una vez posicionado, usar `fread` para leer un solo registro.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
