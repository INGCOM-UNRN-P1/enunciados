### Ejercicio 28.1 - Guardar Inventario ⭐⭐☆☆☆

Escribir una función que reciba un arreglo de `producto_t` y su tamaño, y guarde
todos los productos en un archivo binario llamado `inventario.dat`.

**Lógica y Consideraciones:**
- **Apertura**: El archivo debe abrirse en modo escritura binaria (`"wb"`).
- **Escritura**: Utilizar una única llamada a `fwrite` para escribir el arreglo
  completo. La sintaxis sería `fwrite(productos, sizeof(producto_t), cantidad,
  archivo);`.
- **Verificación**: Es crucial verificar que el valor devuelto por `fwrite` sea
  igual a la `cantidad` de productos que se intentaron escribir.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Lectura de Registros
