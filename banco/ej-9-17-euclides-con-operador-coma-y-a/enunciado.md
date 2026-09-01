### Ejercicio 9.17 - Euclides con Operador Coma y Asignaciones Crípticas ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-euclides-coma
Analizá el siguiente código que usa el operador coma `,` para apretar
asignaciones en un lazo:

``` c
int m(int a,int b){int t;while(b)t=b,b=a%b,a=t;return a;}
```
<!-- c -->

-   **[*plus ultra*]:** Refactorizar en estilo Allman, con nombres claros y
    manejo de enteros negativos con `abs()`.
-   **[*plus ultra*]:** Escribir tests unitarios con `assert()`.

:::
<!-- {exercise} -->

---
