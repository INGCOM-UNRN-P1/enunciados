### Ejercicio 11.39 - b.39 - Análisis de URL simple ⭐☆☆☆☆

#### Descripción
Dada una URL en formato de cadena, escribir una función que la analice y
extraiga sus componentes principales: protocolo, host y ruta.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:** Usar funciones de búsqueda de caracteres (`:`, `/`) para
    encontrar los delimitadores y luego extraer las subcadenas correspondientes.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO analizar_url(url, REF protocolo, REF host, REF ruta)
VARIABLES:
    pos_protocolo, pos_host_inicio, pos_ruta_inicio (enteros)
INICIO
    pos_protocolo = encontrar_caracter(url, ':')
    protocolo = extraer_subcadena(url, 0, pos_protocolo)

    // ... lógica similar para host y ruta ...
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
