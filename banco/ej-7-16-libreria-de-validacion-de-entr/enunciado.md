### Ejercicio 7.16 - Librería de Validación de Entradas de Usuario ⭐⭐☆☆☆

Diseñá `input_val.h` y `input_val.c` para simplificar la lectura segura desde `stdin`:
- `int leer_entero_rango(const char *mensaje, size_t len_msg, int min, int max)`
- `double leer_double_positivo(const char *mensaje, size_t len_msg)`
- `bool leer_confirmacion_s_n(const char *mensaje, size_t len_msg)`
- `void leer_cadena_segura(const char *mensaje, size_t len_msg, char *buffer, size_t tam)`

:::{hint} Lógica y Consideraciones
- Limpiá el búfer de entrada `stdin` ante errores de formato para evitar lazos infinitos.
:::
<!-- {hint} Lógica y Consideraciones -->

---
