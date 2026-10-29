### Ejercicio 20.22 - Detectar conflictos ⭐⭐☆☆☆

Implementar una función que detecte combinaciones incompatibles de opciones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool opciones_compatibles(unsigned int opciones);
```
<!-- c -->

Por ejemplo, `OPT_OPTIMIZAR` y `OPT_DEBUG` podrían considerarse incompatibles en
ciertos contextos.

## Menú de Aplicación

Implementar un sistema de menú interactivo usando enumeraciones.

```{code-block} c
:linenos:
enum opcion_menu
{
    MENU_NUEVO = 1,
    MENU_ABRIR,
    MENU_GUARDAR,
    MENU_CERRAR,
    MENU_SALIR,
    MENU_INVALIDO = -1
};
```
<!-- {code-block} c -->
