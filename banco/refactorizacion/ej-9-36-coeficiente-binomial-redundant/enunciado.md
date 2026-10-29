:::{exercise}
:label: ej-ref-coef-binomial
Refactorizá la siguiente función que calcula $\binom{n}{k}$ recalculando 3
factoriales completos de forma ineficiente y propensa a desbordamientos:

``` c
long long fact(int n){long long r=1;for(int i=2;i<=n;i++)r*=i;return r;}
long long binom(int n,int k){if(k<0||k>n)return 0;return fact(n)/(fact(k)*fact(n-k));}
```

-   **[*plus ultra*]:** Optimizar calculando $\binom{n}{k} = \prod_{i=1}^k
    \frac{n - k + i}{i}$ para evitar desbordamientos prematuros.
-   **[*plus ultra*]:** Escribir tests unitarios para $\binom{5}{2} = 10$,
    $\binom{10}{0} = 1$ y $\binom{20}{5} = 15504$.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Coeficiente Binomial Redundante
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_binomial_redundant(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
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
