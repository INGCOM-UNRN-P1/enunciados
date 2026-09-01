### Ejercicio 20.41 - Parser de respuesta HTTP ⭐⭐☆☆☆

Implementar funciones para trabajar con HTTP.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
const char *metodo_a_string(enum metodo_http metodo);
const char *codigo_a_mensaje(enum codigo_http codigo);
bool es_codigo_exito(enum codigo_http codigo);          // 2xx
bool es_codigo_error_cliente(enum codigo_http codigo);  // 4xx
bool es_codigo_error_servidor(enum codigo_http codigo); // 5xx
```
<!-- c -->

## Semáforo (Sistema de Control)
