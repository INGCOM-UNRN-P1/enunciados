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

-   **[*plus ultra*]:** Escribir una suite de tests unitarios verificando
    `mcd(18, 12) == 6`, `mcd(7, 5) == 1` y `mcd(20, 0) == 20`.
-   **[*plus ultra*]:** Demostrar la invariante del algoritmo: $\text{mcd}(a, b)
    = \text{mcd}(b, a \pmod b)$.

:::

:::{solution} ej-test-tabla-traza
:class: dropdown
| Iteración | `a` (inicio) | `b` (inicio) | `temp` (`b`) | `a % b` | `b` (nuevo) | `a` (nuevo) | Condición (`b != 0`) |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Inicio** | 18 | 12 | - | - | - | - | `true` |
| **1** | 18 | 12 | 12 | 6 | 6 | 12 | `true` |
| **2** | 12 | 6 | 6 | 0 | 0 | 6 | `false` |
| **Fin** | 6 | 0 | - | - | - | - | Retorna `6` |

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación mcd
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int mcd(int a, int b);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
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
