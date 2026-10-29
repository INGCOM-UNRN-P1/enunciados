### Ejercicio 4.30 - Tabla de Traza de Ejecución (Trace Table) ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-tabla-traza
Construí una tabla de traza paso a paso para la llamada `mcd(18, 12)` mostrando
los valores de las variables en cada iteración del lazo:

```{code-block} c
:linenos:
int mcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Escribir una suite de tests unitarios verificando
    `mcd(18, 12) == 6`, `mcd(7, 5) == 1` y `mcd(20, 0) == 20`.
-   **[*plus ultra*]:** Demostrar la invariante del algoritmo: $\text{mcd}(a, b)
    = \text{mcd}(b, a \pmod b)$.

:::
<!-- {exercise} -->

:::{solution} ej-test-tabla-traza
:class: dropdown
| Iteración | `a` (inicio) | `b` (inicio) | `temp` (`b`) | `a % b` | `b` (nuevo) | `a` (nuevo) | Condición (`b != 0`) |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Inicio** | 18 | 12 | - | - | - | - | `true` |
| **1** | 18 | 12 | 12 | 6 | 6 | 12 | `true` |
| **2** | 12 | 6 | 6 | 0 | 0 | 6 | `false` |
| **Fin** | 6 | 0 | - | - | - | - | Retorna `6` |

:::
<!-- {solution} ej-test-tabla-traza -->

---
