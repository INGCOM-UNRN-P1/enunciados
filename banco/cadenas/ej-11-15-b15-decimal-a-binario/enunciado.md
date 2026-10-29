### Ejercicio 11.15 - b.15 - Decimal a binario ⭐⭐⭐⭐☆

#### Descripción
Convertir un número entero decimal a su representación en una cadena de texto
binaria.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Usar divisiones sucesivas por 2. El resto de cada división (`n % 2`) es
        el siguiente dígito binario.
    2.  Guardar estos dígitos en un arreglo o cadena.
    3.  Como los dígitos se generan en orden inverso, la cadena resultante debe
        ser invertida al final.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION decimal_a_binario(n)
VARIABLES:
    cadena_inversa, cadena_final (cadenas)
INICIO
    SI n == 0 RETORNAR "0"

    MIENTRAS n > 0 HACER
        resto = n MOD 2
        AÑADIR caracter(resto) a cadena_inversa
        n = n / 2
    FIN MIENTRAS

    cadena_final = invertir_cadena(cadena_inversa)
    RETORNAR cadena_final
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
