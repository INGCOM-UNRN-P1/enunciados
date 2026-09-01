### Ejercicio 4.28 - Detección de Error Off-by-one en Lazos ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-off-by-one
El siguiente algoritmo debe sumar los primeros $N$ números naturales ($1 + 2 +
\dots + N$). Descubrí el error en la condición del lazo:

```{code-block} c
:linenos:
int suma_primeros_n(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int total = 0;
    for (int i = 1; i < n; i++) // ¿Qué error hay acá?
    {
        total += i;
    }
    return total;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Escribir un test unitario para `suma_primeros_n(4)` cuyo
    resultado esperado es `10`.
-   **[*plus ultra*]:** Corregir el lazo para que incluya al número $N$ usando
    `<=`.

:::
<!-- {exercise} -->

:::{solution} ej-test-off-by-one
:class: dropdown
El lazo utiliza `i < n`, lo que omite sumar el último valor $N$. Para $N=4$,
suma $1+2+3 = 6$ en lugar de $1+2+3+4 = 10$.

**Corrección:**
```{code-block} c
:linenos:
int suma_primeros_n(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    return total;
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-off-by-one -->

---
