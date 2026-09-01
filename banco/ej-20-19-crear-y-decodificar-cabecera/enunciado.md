### Ejercicio 20.19 - Crear y decodificar cabecera ⭐⭐☆☆☆

Implementar funciones para construir y extraer información de la cabecera.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
cabecera_mensaje_t crear_cabecera(enum tipo_mensaje tipo,
                                  unsigned int prioridad,
                                  unsigned int secuencia);
void imprimir_cabecera(cabecera_mensaje_t cabecera);
```
<!-- c -->
