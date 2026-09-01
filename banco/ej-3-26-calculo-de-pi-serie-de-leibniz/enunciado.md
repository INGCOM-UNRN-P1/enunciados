### Ejercicio 3.26 - Cálculo de Pi (Serie de Leibniz) ⭐⭐☆☆☆

#### Descripción
Aproximar el valor de $\pi$ utilizando la serie de Leibniz. La función debe
recibir el número de términos a utilizar para la aproximación.

:::{hint} Lógica y Consideraciones
-   **Fórmula:** $\pi = 4 \sum_{k=0}^{\infty} \frac{(-1)^k}{2k+1} = 4 (1 -
    \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \dots)$
-   **Proceso:** 
    1.  Inicializar una variable `suma` a 0.
    2.  Iterar `k` desde 0 hasta el número de términos deseado.
    3.  En cada iteración, calcular el término $\frac{(-1)^k}{2k+1}$ y añadirlo
        a `suma`.
    4.  El resultado final es `4 * suma`.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Permitir al usuario ingresar la cantidad de términos o la precisión deseada.
-   **[*plus ultra*]:** Comparar el valor aproximado con M_PI de math.h y mostrar el error relativo.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION aproximar_pi(n_terminos)
VARIABLES:
    suma (real)
INICIO
    suma = 0.0
    PARA k DESDE 0 HASTA n_terminos - 1 HACER
        termino = potencia(-1, k) / (2.0 * k + 1.0)
        suma = suma + termino
    FIN PARA
    RETORNAR 4.0 * suma
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
