#### Descripción
Implementar la función `int division_lenta(int dividendo, int divisor);` que calcula el cociente entero de la división de dos enteros mediante restas sucesivas. Este método emula cómo se realiza una división entera sin utilizar el operador `/`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION division_lenta(dividendo, divisor)
VARIABLES:
    cociente (entero)
INICIO
    cociente = 0
    MIENTRAS dividendo >= divisor HACER
        dividendo = dividendo - divisor
        cociente = cociente + 1
    FIN MIENTRAS
    RETORNAR cociente
FIN FUNCION
```

:::

## Interfaz

```c
int division_lenta(int dividendo, int divisor);
```

## Ejemplos

- `division_lenta(12, 3)` devuelve `4`.
- `division_lenta(14, 3)` devuelve `4` (truncamiento).
- `division_lenta(-14, 3)` devuelve `-4`.
- `division_lenta(5, 0)` devuelve `0`.
