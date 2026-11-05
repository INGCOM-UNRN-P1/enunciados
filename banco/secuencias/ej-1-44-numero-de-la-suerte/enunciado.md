Un número de la suerte tiene una cantidad par de dígitos decimales y la suma
de los dígitos de su primera mitad es igual a la de su segunda mitad. No se
cuenta el signo y el cero tiene un dígito.

Implementá la función `int es_numero_de_la_suerte(int numero)`, que retorna 1
si el número cumple la condición y 0 en caso contrario. Luego escribí un
programa que lea un entero y muestre si es un número de la suerte.

Por ejemplo, `1230` y `-1230` cumplen la condición: 1 + 2 = 3 + 0.
`1234` no la cumple, ni tampoco `123`, que tiene una cantidad impar de dígitos.

:::{hint} Ayuda
Contá los dígitos sin incluir el signo. Sumá los de cada mitad por separado.
:::
