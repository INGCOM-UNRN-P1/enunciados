### Ejercicio 9.22 - Números Perfectos con Lazo Ineficiente ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-perfecto-ineficiente
Refactorizá la siguiente función que verifica números perfectos (donde la suma
de divisores propios es igual al número):

``` c
int perf(int n){int s=0;for(int i=1;i<n;i++){if(n%i==0)s+=i;}return s==n;}
```
<!-- c -->

-   **[*plus ultra*]:** Optimizar sumando divisores en pares hasta $\sqrt{n}$.
-   **[*plus ultra*]:** Retornar un `bool` claro y documentar precondiciones.

:::
<!-- {exercise} -->

---
