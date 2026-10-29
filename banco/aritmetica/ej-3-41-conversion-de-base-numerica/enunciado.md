### Ejercicio 3.41 - Conversión de Base Numérica ⭐⭐☆☆☆

#### Descripción
Escribir una función que convierta un número `n` de una base `b1` a una base
`b2`.

:::{hint} Lógica y Consideraciones
-   **Proceso en dos pasos:** El método más simple es:
    1.  **Convertir a base 10:** Convertir el número de su base original `b1` a
        base 10. Si el número está en un arreglo de dígitos, se calcula $\sum
        digito_i \cdot b1^i$.
    2.  **Convertir de base 10:** Convertir el número de base 10 a la base de
        destino `b2` usando divisiones sucesivas y guardando los restos.
    filas (*row-major order*) para mejorar el uso de caché.
    estrictamente dentro de los límites del contenedor.

-   **[*plus ultra*]:** Validar que la base de destino esté entre 2 y 16.
-   **[*plus ultra*]:** Formatear la salida con dígitos alfanuméricos apropiados (0-9, A-F).

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION convertir_base(numero_original, b1, b2)
INICIO
    // Paso 1: Convertir de b1 a base 10
    valor_base10 = 0
    // ... lazo para calcular el valor en base 10 ...

    // Paso 2: Convertir de base 10 a b2
    resultado_final = ""
    MIENTRAS valor_base10 > 0 HACER
        resto = valor_base10 MOD b2
        resultado_final = caracter(resto) + resultado_final
        valor_base10 = valor_base10 / b2
    FIN MIENTRAS

    RETORNAR resultado_final
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
