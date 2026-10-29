### Ejercicio 9.38 - Criba de Divisores Estática ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-criba-estatica
Refactorizá la siguiente función que llena un arreglo indicando la cantidad de
divisores propios de cada número:

``` c
void c(int a[],int n){for(int i=1;i<=n;i++){a[i-1]=0;for(int j=1;j<i;j++)if(i%j==0)a[i-1]++;}}
```
<!-- c -->

-   **[*plus ultra*]:** Descomponer en `int contar_divisores_propios(int n)` y
    `void llenar_tabla_divisores(int tabla[], int n)`.
-   **[*plus ultra*]:** Validar que `n > 0` y puntero no nulo.

:::
<!-- {exercise} -->

---
