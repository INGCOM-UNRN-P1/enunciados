### Ejercicio 28.4 - Actualizar Registro ⭐⭐☆☆☆

Implementar una función `void actualizar_stock(int n, int nuevo_stock)` que
modifique únicamente el stock del `n`-ésimo registro en el archivo.

**Lógica y Consideraciones:**
- **Apertura**: El archivo debe abrirse en un modo que permita tanto lectura
  como escritura, sin borrar el contenido: `"rb+"`.
- **Proceso**: 
  1. Usar `fseek` para posicionarse al inicio del registro `n`.
  2. Usar `fread` para leer el registro actual en una variable `producto_t`.
  3. Modificar el campo `stock` en la variable.
  4. **Crucial**: Usar `fseek` de nuevo para volver a la misma posición (porque
     la lectura movió el puntero).
  5. Usar `fwrite` para sobrescribir el registro en el archivo con la estructura
     ya modificada.

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
