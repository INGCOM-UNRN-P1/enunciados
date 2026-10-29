### Ejercicio 9.20 - Conteo de Números Armstrong Desordenado ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-armstrong-desordenado
El siguiente código verifica si un número de 3 dígitos es igual a la suma del
cubo de sus dígitos, pero está escrito de forma ilegible:

``` c
int arm(int x){int a=x/100,b=(x/10)%10,c=x%10;return(a*a*a+b*b*b+c*c*c==x)?1:0;}
```
<!-- c -->

-   **[*plus ultra*]:** Eliminar el ternario `?:` y retornar un `bool`.
-   **[*plus ultra*]:** Generalizar para cualquier cantidad de dígitos mediante
    funciones auxiliares.

:::
<!-- {exercise} -->

---
