### Ejercicio 3.35 - Radical de un Número ⭐⭐☆☆☆

#### Descripción
Calcular el radical de un número `n`, denotado como `rad(n)`, que es el producto
de sus factores primos distintos.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** Similar a la descomposición en factores primos, pero en lugar
    de contar potencias, simplemente se multiplica cada factor primo distinto
    encontrado a una variable `resultado`.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Calcular el radical como el producto de los factores primos distintos del número.
-   **[*plus ultra*]:** Validar que n sea mayor que 1.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION radical(n)
VARIABLES:
    resultado (entero)
INICIO
    resultado = 1
    // Lógica para encontrar factores primos distintos y multiplicarlos
    // ...
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
