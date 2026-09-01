### Ejercicio 3.21 - Raíz Cuadrada Entera (Método Babilónico) ⭐⭐☆☆☆

#### Descripción
Implementar un algoritmo para calcular la parte entera de la raíz cuadrada de un
número `n` utilizando el método babilónico (o de Herón), que es un método
iterativo eficiente.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un número no negativo `n`.
-   **Proceso:** Es un algoritmo de aproximaciones sucesivas.
    1.  Se elige una estimación inicial `x` (por ejemplo, `x = n`).
    2.  Se repite un número fijo de veces o hasta que la estimación converja: `x
        = (x + n / x) / 2`.
-   **Salida:** El resultado es la parte entera de la estimación final `x`.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Mostrar la cantidad de iteraciones requeridas hasta alcanzar la convergencia.
-   **[*plus ultra*]:** Validar que el número sea no negativo.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION raiz_cuadrada_entera(n)
VARIABLES:
    x (real)
INICIO
    SI n < 0 RETORNAR -1 // Error
    SI n == 0 RETORNAR 0

    x = n
    // Iterar un número fijo de veces para aproximar
    PARA i DESDE 1 HASTA 10 HACER
        x = (x + n / x) / 2
    FIN PARA

    RETORNAR PARTE_ENTERA(x)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
