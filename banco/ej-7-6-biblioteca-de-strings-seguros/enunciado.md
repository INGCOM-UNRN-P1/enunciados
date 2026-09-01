### Ejercicio 7.6 - Biblioteca de Strings seguros ⭐⭐⭐⭐⭐

Reimplementá funciones estándar de `<string.h>` en la librería `seguras.h` y `seguras.c`:
- `int mi_strlen(const char *str, size_t len_str)`
- `void mi_strcpy(char *dest, size_t len_dest, const char *src, size_t len_src)`
- `int mi_strcmp(const char *s1, size_t len_s1, const char *s2, size_t len_s2)`
- `void mi_strcat(char *dest, size_t len_dest, const char *src, size_t len_src)`
- `char *mi_strchr(const char *str, size_t len_str, char c)`

**Orientación:**
- `strlen`: contá hasta `'\0'` o hasta alcanzar `len_str`
- `strcpy`: copiá carácter por carácter respetando los límites de tamaño
- `strcmp`: retorna la diferencia numérica del primer carácter distinto dentro de los límites
- `strcat`: copiá `src` al final de `dest` sin sobrepasar `len_dest`
- `strchr`: retorna puntero a la primera aparición de `c` dentro del límite indicado
- Verificá límites de destino para evitar desbordamientos de búfer.

:::{hint} Lógica y Consideraciones
- **[*plus ultra*]:** Diseñar una suite de pruebas unitarias con `assert()` en `tests/` que verifique cadenas vacías y límites exactos de búfer.
- **[*plus ultra*]:** Documentar con etiquetas Doxygen (`@pre`, `@post`) los contratos de seguridad de cada función.
:::
<!-- {hint} Lógica y Consideraciones -->

---
