### Ejercicio 20.3 - Nombre del día ⭐⭐☆☆☆

Implementar una función que retorne el nombre del día como cadena de texto. Esta
función ilustra el patrón de conversión enum-a-string.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
const char *nombre_dia(enum dia_semana dia);
```
<!-- c -->

## Estados de Conexión

Modelar los estados de una conexión de red usando enumeraciones.

```{code-block} c
:linenos:
enum estado_red
{
    DESCONECTADO,
    CONECTANDO,
    CONECTADO,
    DESCONECTANDO,
    ERROR_TIMEOUT,
    ERROR_AUTH
};
```
<!-- {code-block} c -->
