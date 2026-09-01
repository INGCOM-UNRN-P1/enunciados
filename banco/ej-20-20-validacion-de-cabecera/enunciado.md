### Ejercicio 20.20 - Validación de cabecera ⭐⭐☆☆☆

Implementar una función que valide que los valores de una cabecera están dentro
de los rangos permitidos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool cabecera_valida(cabecera_mensaje_t cabecera);
```
<!-- c -->

## Opciones de Compilación con Flags

Modelar opciones de compilación como flags combinables.

```{code-block} c
:linenos:
enum opcion_compilacion
{
    OPT_NINGUNA = 0,
    OPT_OPTIMIZAR = 1 << 0,      // -O
    OPT_DEBUG = 1 << 1,          // -g
    OPT_WARNINGS = 1 << 2,       // -Wall
    OPT_WARNINGS_EXTRA = 1 << 3, // -Wextra
    OPT_PEDANTIC = 1 << 4        // -pedantic
};
```
<!-- {code-block} c -->
