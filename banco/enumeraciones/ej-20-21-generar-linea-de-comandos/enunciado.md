### Ejercicio 20.21 - Generar línea de comandos ⭐⭐☆☆☆

Implementar una función que genere una cadena con las opciones de compilación
correspondientes a los flags activos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void generar_comando_compilacion(unsigned int opciones, char *buffer,
                                 size_t tam);
```
<!-- c -->

Ejemplo: Si `opciones` tiene `OPT_DEBUG | OPT_WARNINGS`, el buffer debe contener
`"-g -Wall"`.
