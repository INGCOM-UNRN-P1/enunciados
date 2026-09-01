### Ejercicio 9.59 - Distancias Manhattan y Euclidiana Todo-en-Uno ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-distancias-vectores
Refactorizá la siguiente función que calcula distancias entre dos vectores de
$N$ dimensiones según un selector de modo:

``` c
double dist(double a[],double b[],int n,int m){double s=0;for(int i=0;i<n;i++){double d=fabs(a[i]-b[i]);s+=(m==1)?d:d*d;}return(m==1)?s:sqrt(s);}
```
<!-- c -->

**Tu tarea:**
1. Descomponer en dos funciones puras independientes:
   `calcular_distancia_manhattan` y `calcular_distancia_euclidiana`.
2. Eliminar el parámetro selector `m` y los operadores ternarios.
3. Escribir tests unitarios con `assert()` comparando con tolerancia `1e-6`.

:::
<!-- {exercise} -->

---
