### Ejercicio 3.17 - Criba de Eratóstenes ⭐⭐☆☆☆

#### Descripción
Implementar la Criba de Eratóstenes, un algoritmo altamente eficiente para
encontrar todos los números primos hasta un límite superior $N$ especificado.

:::{hint} Lógica y Consideraciones
-   **Estructura de Datos:** Se necesita un arreglo booleano (o de enteros)
    `es_primo` de tamaño `N+1`. `es_primo[i]` será verdadero si `i` es primo y
    falso en caso contrario.
-   **Inicialización:** Se inicializa todo el arreglo a `verdadero`, asumiendo
    que todos los números son primos al principio. Luego, se marcan 0 y 1 como
    no primos.
-   **Proceso:** 
    1.  Se itera con un número `p` desde 2 hasta $\sqrt{N}$.
    2.  Si `p` sigue marcado como primo (`es_primo[p]` es verdadero):
        a. Se itera a través de todos los múltiplos de `p` (comenzando desde
        `p*p`) y se marcan como no primos (`es_primo[multiplo] = falso`). Se
        empieza en `p*p` porque los múltiplos menores ya habrán sido marcados
        por primos más pequeños.
-   **Salida:** Al final, se recorre el arreglo `es_primo` y se imprimen todos
    los índices `i` para los cuales `es_primo[i]` es verdadero.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que el límite superior sea mayor a 1 y usar un arreglo de tamaño fijo para marcar primos.
-   **[*plus ultra*]:** Mostrar la cantidad total de primos encontrados y el porcentaje que representan en el rango.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO criba_eratostenes(N)
VARIABLES:
    es_primo (arreglo booleano de tamaño N+1)

INICIO
    // Inicialización
    PARA i DESDE 0 HASTA N HACER
        es_primo[i] = VERDADERO
    FIN PARA
    es_primo[0] = FALSO, es_primo[1] = FALSO

    // Marcado de múltiplos
    PARA p DESDE 2 HASTA RAIZ_CUADRADA(N) HACER
        SI es_primo[p] == VERDADERO ENTONCES
            PARA i DESDE p*p HASTA N CON PASO p HACER
                es_primo[i] = FALSO
            FIN PARA
        FIN SI
    FIN PARA

    // Imprimir resultados
    ESCRIBIR "Números primos hasta ", N, ":"
    PARA i DESDE 2 HASTA N HACER
        SI es_primo[i] == VERDADERO ENTONCES
            ESCRIBIR i
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
