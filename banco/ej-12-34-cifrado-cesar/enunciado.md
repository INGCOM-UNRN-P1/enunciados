### Ejercicio 12.34 - Cifrado César ⭐⭐⭐⭐☆

Cifrá/descifrá un archivo usando cifrado César (rotación de N posiciones en
alfabeto).

**Orientación:**
- Para cifrar: `c_cifrado = ((c - 'a' + n) % 26) + 'a'`
- Para descifrar: `c_original = ((c - 'a' - n + 26) % 26) + 'a'`
- Mantené espacios y puntuación sin cambios


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar la correcta apertura del archivo y controlar
    errores de E/S con `ferror` y `feof`.
-   **[*plus ultra*]:** Soportar rutas complejas y asegurar el cierre del
    archivo en todos los caminos de ejecución.

:::
<!-- {hint} Lógica y Consideraciones -->

---
