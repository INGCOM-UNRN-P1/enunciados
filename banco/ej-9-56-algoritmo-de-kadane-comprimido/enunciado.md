### Ejercicio 9.56 - Algoritmo de Kadane Comprimido ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-kadane-comprimido
Analizá el siguiente algoritmo que calcula la suma máxima de un subarreglo
contiguo (Algoritmo de Kadane) en una sola línea ofuscada:

``` c
int kad(int a[],int n){int m=a[0],c=a[0];for(int i=1;i<n;i++)c=(a[i]>c+a[i])?a[i]:c+a[i],m=(c>m)?c:m;return m;}
```
<!-- c -->

**Tu tarea:**
1. Eliminar los operadores ternarios y el operador coma `,`.
2. Escribir la lógica en estilo Allman con nombres claros (`maximo_global,
   maximo_actual`).
3. Validar que $N > 0$ y puntero no nulo.
4. Escribir tests unitarios para arreglos con números positivos, negativos y
   mixtos (ej. `{-2, 1, -3, 4, -1, 2, 1, -5, 4}` da `6`).

:::
<!-- {exercise} -->

---
