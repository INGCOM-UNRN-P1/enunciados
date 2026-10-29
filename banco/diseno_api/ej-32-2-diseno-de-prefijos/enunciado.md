### Ejercicio 32.2 - Diseño de Prefijos ⭐⭐☆☆☆

Diseñar esquemas de prefijos para estas librerías:

a) **Librería de gestión de base de datos**  
b) **Librería de compresión de archivos**  
c) **Librería de validación de entrada**  
d) **Librería de parseo JSON**

Para cada una:
- Proponer un prefijo corto pero descriptivo
- Listar 5 funciones típicas con el prefijo aplicado
- Justificar la elección del prefijo

**Ejemplo:**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
// Librería de parseo JSON - prefijo: json_
json_parser_t *json_parser_crear(void);
json_value_t *json_parser_parse_string(json_parser_t *parser, const char *str);
bool json_value_es_objeto(const json_value_t *value);
```
<!-- c -->
