### Ejercicio 9.45 - Validador de Octetos IPv4 Caótico ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-ipv4-caotico
Refactorizá la siguiente función que valida si 4 enteros representan una
dirección IPv4 válida ($0 \le x \le 255$):

``` c
int v4(int a,int b,int c,int d){if(a<0||a>255)return 0;if(b<0||b>255)return 0;if(c<0||c>255)return 0;if(d<0||d>255)return 0;return 1;}
```
<!-- c -->

-   **[*plus ultra*]:** Extraer la función pura `bool es_octeto_valido(int
    octeto)` (principio DRY).
-   **[*plus ultra*]:** Retornar un `bool` e incluir tests unitarios.

:::
<!-- {exercise} -->

---
