### Ejercicio 9.54 - Búsqueda Binaria con Riesgo de Desbordamiento ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-busqueda-binaria-overflow
El siguiente código implementa búsqueda binaria pero utiliza el cálculo riesgoso
`int m = (l + r) / 2` que puede desbordar enteros grandes:

``` c
int bsearch(int a[],int n,int x){int l=0,r=n-1;while(l<=r){int m=(l+r)/2;if(a[m]==x)return m;if(a[m]<x)l=m+1;else r=m-1;}return -1;}
```
<!-- c -->

-   **[*plus ultra*]:** Reemplazar por `int medio = l + (r - l) / 2;`.
-   **[*plus ultra*]:** Agregar `const` al arreglo y formatear en Allman.

:::
<!-- {exercise} -->

---
