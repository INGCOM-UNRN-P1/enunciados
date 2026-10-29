### Ejercicio 3.5 - Factorial ⭐⭐☆☆☆

#### Descripción
Calcular el factorial de un número entero no negativo `n`, denotado como `n!`.
El factorial es el producto de todos los enteros positivos desde 1 hasta `n`.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero no negativo `n`.
-   **Casos Base:** Por definición, `0! = 1`. El factorial de 1 es 1.
-   **Proceso:** Se utiliza un lazo que itera desde 2 hasta `n`. Se necesita una
    variable `resultado` (de tipo `long long` para evitar desbordamiento rápido)
    inicializada en 1. En cada iteración, se multiplica `resultado` por el
    número actual del lazo.
-   **Desbordamiento:** Los factoriales crecen muy rápido. Usar un tipo de dato
    grande como `unsigned long long` es crucial.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Validar que n >= 0 y usar long long para retrasar el desbordamiento numérico.
-   **[*plus ultra*]:** Informar el valor máximo de n para el cual no se produce desbordamiento con el tipo empleado.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION factorial(n)
VARIABLES:
    resultado (entero largo)
INICIO
    SI n < 0 ENTONCES
        RETORNAR -1 // Error
    FIN SI
    SI n == 0 ENTONCES
        RETORNAR 1
    FIN SI

    resultado = 1
    PARA i DESDE 2 HASTA n HACER
        resultado = resultado * i
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
