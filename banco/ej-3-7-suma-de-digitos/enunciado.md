### Ejercicio 3.7 - Suma de dígitos ⭐⭐☆☆☆

#### Descripción
Calcular la suma de los dígitos individuales de un número entero positivo.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero positivo `n`.
-   **Proceso:** Se utiliza un lazo que se repite mientras `n` sea mayor que 0.
    1.  **Obtener último dígito:** `digito = n % 10`.
    2.  **Sumar dígito:** `suma = suma + digito`.
    3.  **Eliminar último dígito:** `n = n / 10` (división entera).
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Manejar números negativos considerando sus dígitos como positivos.
-   **[*plus ultra*]:** Repetir la suma de dígitos hasta obtener un valor de un solo dígito (raíz digital).

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION sumar_digitos(n)
VARIABLES:
    suma (entero)
INICIO
    suma = 0
    MIENTRAS n > 0 HACER
        suma = suma + (n MOD 10)
        n = n / 10
    FIN MIENTRAS
    RETORNAR suma
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
