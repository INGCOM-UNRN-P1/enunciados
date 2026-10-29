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

-   **[*plus ultra*]:** Escribir un test unitario para `suma_primeros_n(4)` cuyo
    resultado esperado es `10`.
-   **[*plus ultra*]:** Corregir el lazo para que incluya al número $N$ usando
    `<=`.

:::

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

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación suma_primeros_n
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int suma_primeros_n(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
