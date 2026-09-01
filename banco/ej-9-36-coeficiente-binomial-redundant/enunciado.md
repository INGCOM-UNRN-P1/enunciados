### Ejercicio 9.36 - Coeficiente Binomial Redundante ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-coef-binomial
Refactorizá la siguiente función que calcula $\binom{n}{k}$ recalculando 3
factoriales completos de forma ineficiente y propensa a desbordamientos:

``` c
long long fact(int n){long long r=1;for(int i=2;i<=n;i++)r*=i;return r;}
long long binom(int n,int k){if(k<0||k>n)return 0;return fact(n)/(fact(k)*fact(n-k));}
```
<!-- c -->

-   **[*plus ultra*]:** Optimizar calculando $\binom{n}{k} = \prod_{i=1}^k
    \frac{n - k + i}{i}$ para evitar desbordamientos prematuros.
-   **[*plus ultra*]:** Escribir tests unitarios para $\binom{5}{2} = 10$,
    $\binom{10}{0} = 1$ y $\binom{20}{5} = 15504$.

:::
<!-- {exercise} -->

---
