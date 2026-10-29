### Ejercicio 4.38 - Inicialización obligatoria de variables ⭐☆☆☆☆

:::{exercise}
:label: ej-test-inicializacion-vars
Analizá qué comportamiento indefinido (*Undefined Behavior*) ocurre en la
siguiente función y corregilo aplicando la [Regla
0x0003h](../../reglas/0_sintaxis.md#0x0003h):

```{code-block} c
:linenos:
int contar_multiplos(const int arr[], int n, int divisor)
{
    int contador; // ¡Variable no inicializada!
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % divisor == 0)
        {
            contador++;
        }
    }
    return contador;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Explicar por qué las variables locales contienen valores
    basura si no se inicializan explícitamente.
-   **[*plus ultra*]:** Escribir una prueba unitaria para verificar
    `contar_multiplos`.

:::
<!-- {exercise} -->

:::{solution} ej-test-inicializacion-vars
:class: dropdown
Al no inicializarse, `contador` contiene un valor residual indeterminado
proveniente de la memoria de la pila. El incremento `contador++` genera
comportamiento indefinido y resultados erróneos impredecibles.

**Corrección:**
```{code-block} c
:linenos:
int contar_multiplos(const int arr[], int n, int divisor)
{
    if (divisor == 0)
    {
        return -1;
    }
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % divisor == 0)
        {
            contador++;
        }
    }
    return contador;
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-inicializacion-vars -->

---
