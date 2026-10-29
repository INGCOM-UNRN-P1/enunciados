### Ejercicio 9.58 - Ordenamiento por Inserción Compacto ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-insercion-compacto
Refactorizá la siguiente implementación de Insertion Sort:

``` c
void isort(int a[],int n){for(int i=1;i<n;i++){int k=a[i],j=i-1;while(j>=0&&a[j]>k){a[j+1]=a[j];j--;}a[j+1]=k;}}
```
<!-- c -->

**Tu tarea:**
1. Formatear en estilo Allman con llaves explícitas en todos los bloques.
2. Renombrar variables (`elemento_clave, indice_anterior`).
3. Escribir tests unitarios que validen el orden no decreciente del arreglo tras
   la ejecución.

:::
<!-- {exercise} -->

---
