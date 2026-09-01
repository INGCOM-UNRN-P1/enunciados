### Ejercicio 9.13 - Expresión Booleana Monolítica de Validación de Fecha ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-fecha-monolitica
El siguiente código comprueba la validez de una fecha en una sola expresión
booleana incomprensible de difícil depuración:

``` c
bool v(int d,int m,int y){return(y>0&&m>=1&&m<=12&&d>=1)&&((m==2&&(((y%4==0&&y%100!=0)||(y%400==0))?d<=29:d<=28))||((m==4||m==6||m==9||m==11)?d<=30:d<=31));}
```
<!-- c -->

-   **[*plus ultra*]:** Descomponer en funciones auxiliares puras `es_bisiesto`
    y `dias_del_mes`.
-   **[*plus ultra*]:** Escribir una suite de tests unitarios estructurada.

:::
<!-- {exercise} -->

---
