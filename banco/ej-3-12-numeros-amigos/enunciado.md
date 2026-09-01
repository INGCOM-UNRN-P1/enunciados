### Ejercicio 3.12 - Números Amigos ⭐⭐☆☆☆

#### Descripción
Verificar si dos números enteros positivos, `a` y `b`, son "números amigos". Dos
números son amigos si la suma de los divisores propios de `a` es igual a `b`, y
viceversa.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Dos enteros positivos, `a` y `b`.
-   **Reutilización de Código:** Este problema se simplifica si ya se tiene una
    función que calcula la suma de los divisores propios de un número (como la
    usada en el ejercicio de "Números Perfectos").
-   **Proceso:** 
    1.  Calcular la suma de los divisores propios de `a`. Llamémosla
        `suma_div_a`.
    2.  Calcular la suma de los divisores propios de `b`. Llamémosla
        `suma_div_b`.
    3.  Verificar si se cumplen las dos condiciones: `suma_div_a == b` Y
        `suma_div_b == a`.
-   **Caso Especial:** Asegurarse de que `a` y `b` no sean el mismo número (un
    número perfecto es amigo de sí mismo, lo que a veces se excluye de la
    definición de números amigos).
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que n sea positivo y mostrar los divisores de ambos números para verificar la suma.
-   **[*plus ultra*]:** Encontrar todos los pares de números amigos menores a un límite dado.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION suma_divisores_propios(n)
    // ... implementación como en el ejercicio de Números Perfectos ...
FIN FUNCION

FUNCION son_amigos(a, b)
INICIO
    // Opcional: excluir números perfectos
    SI a == b ENTONCES
        RETORNAR FALSO
    FIN SI

    suma_a = suma_divisores_propios(a)
    suma_b = suma_divisores_propios(b)

    SI suma_a == b Y suma_b == a ENTONCES
        RETORNAR VERDADERO
    SINO
        RETORNAR FALSO
    FIN SI
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
