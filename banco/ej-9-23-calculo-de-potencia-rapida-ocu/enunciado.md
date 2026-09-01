### Ejercicio 9.23 - Cálculo de Potencia Rápida Oculto ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-potencia-rapida
Descifrá el algoritmo y refactorizalo a código limpio:

``` c
double p(double b,int e){double r=1.0;int n=(e<0)?-e:e;while(n){if(n%2)r*=b;b*=b;n/=2;}return(e<0)?1.0/r:r;}
```
<!-- c -->

-   **[*plus ultra*]:** Eliminar los operadores ternarios y usar cláusulas de
    guarda.
-   **[*plus ultra*]:** Escribir tests unitarios para exponentes positivos,
    negativos y cero.

:::
<!-- {exercise} -->

---
