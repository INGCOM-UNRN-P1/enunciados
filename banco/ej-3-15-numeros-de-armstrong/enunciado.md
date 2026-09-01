### Ejercicio 3.15 - Números de Armstrong ⭐⭐☆☆☆

#### Descripción
Verificar si un número es un número de Armstrong (o narcisista). Un número de
`k` dígitos es de Armstrong si es igual a la suma de sus propios dígitos
elevados a la potencia `k`.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** 
    1.  Contar el número de dígitos (`k`) del número `n`.
    2.  Inicializar un acumulador `suma` en 0.
    3.  Recorrer los dígitos de `n` (usando `% 10` y `/ 10`). Para cada dígito,
        calcular `digito^k` y añadirlo a la `suma`.
    4.  Comparar la `suma` final con el número original `n`.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Determinar automáticamente la cantidad de dígitos del número antes de calcular las potencias.
-   **[*plus ultra*]:** Encontrar todos los números de Armstrong de 3 y 4 dígitos.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

FUNCION es_armstrong(n)
VARIABLES:
    k, suma, temp, digito (enteros)
INICIO
    k = contar_digitos(n)
    suma = 0
    temp = n

    MIENTRAS temp > 0 HACER
        digito = temp MOD 10
        suma = suma + potencia(digito, k)
        temp = temp / 10
    FIN MIENTRAS

    RETORNAR (suma == n)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
