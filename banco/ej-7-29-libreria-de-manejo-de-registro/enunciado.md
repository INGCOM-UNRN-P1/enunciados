### Ejercicio 7.29 - Librería de Manejo de Registro de Logs ⭐⭐⭐⭐☆

Diseñá `logger.h` y `logger.c`:
- `typedef enum { LOG_DEBUG, LOG_INFO, LOG_WARN, LOG_ERROR } log_nivel_t`
- `void log_set_nivel_minimo(log_nivel_t nivel)`
- `void log_mensaje(log_nivel_t nivel, const char *modulo, size_t len_mod, const char *mensaje, size_t len_msg)`

:::{hint} Lógica y Consideraciones
- Los mensajes con un nivel inferior al nivel mínimo configurado deben ser ignorados.
:::
<!-- {hint} Lógica y Consideraciones -->

---
