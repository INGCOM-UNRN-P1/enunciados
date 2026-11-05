El objetivo es encontrar el valor más grande entre tres números enteros
proporcionados por el usuario. Este ejercicio se centra en el uso de
condicionales anidados o operadores lógicos para realizar comparaciones
múltiples.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO maximo_de_tres
ENTRADA: a, b, c (enteros)
VARIABLES:
    maximo (entero)

INICIO
    LEER a, b, c
    maximo = a
    SI b > maximo ENTONCES
        maximo = b
    FIN SI
    SI c > maximo ENTONCES
        maximo = c
    FIN SI
    ESCRIBIR "El número más grande es: ", maximo
FIN

```

:::

:::{hint} Consideraciones Didácticas
- **Entrada:** Leer tres números enteros distintos (`a`, `b`, `c`).
- **Proceso:** Se puede resolver de varias maneras:
- `SI (a >= b Y a >= c) ENTONCES a es el máximo.`
- `SINO SI (b >= a Y b >= c) ENTONCES b es el máximo.`
- `SINO c es el máximo.`
- **Salida:** Imprimir el número que resultó ser el mayor.
- Encapsular la comparación en una función int maximo_de_tres(int a, int b, int c).
- Extender el programa para identificar si los tres números son iguales entre sí.
:::

### Formato de entrada y salida

Leé tres números enteros y mostrá el mayor seguido de un salto de línea. Si el máximo aparece más de una vez, imprimí ese valor una sola vez.
