### Ejercicio 20.56 - Comparación de implementaciones ⭐⭐☆☆☆

Analizar diferentes formas de implementar el mismo concepto:

**Opción 1: Enum simple**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
enum dia
{
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};
```
<!-- c -->

**Opción 2: Enum con valores explícitos**
``` c
enum dia
{
    LUNES = 1,
    MARTES = 2,
    MIERCOLES = 3,
    JUEVES = 4,
    VIERNES = 5,
    SABADO = 6,
    DOMINGO = 7
};
```
<!-- c -->

**Opción 3: Flags con potencias de 2**
``` c
enum dia
{
    LUNES = 1 << 0,
    MARTES = 1 << 1,
    MIERCOLES = 1 << 2,
    JUEVES = 1 << 3,
    VIERNES = 1 << 4,
    SABADO = 1 << 5,
    DOMINGO = 1 << 6
};
```
<!-- c -->

Discutir casos de uso, ventajas y desventajas de cada enfoque.
