### Ejercicio 9.40 - Conjetura de Collatz Caótica ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-collatz-caotica
Refactorizá la siguiente función que cuenta la cantidad de pasos hasta llegar a
1 en la secuencia de Collatz ($3n+1$), la cual mezcla ternarios y lazos
`while(1)`:

``` c
int col(long long n){int c=0;if(n<=0)return -1;while(1){if(n==1)break;n=(n%2==0)?n/2:3*n+1;c++;}return c;}
```
<!-- c -->

-   **[*plus ultra*]:** Eliminar el ternario y el `while(1)`.
-   **[*plus ultra*]:** Escribir tests con `assert()` para `col(1) == 0`,
    `col(6) == 8` y `col(27) == 111`.

:::
<!-- {exercise} -->

---
