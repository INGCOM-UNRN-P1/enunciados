### Ejercicio 9.60 - Conteo de Componentes Conexas 1D ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-componentes-conexas-1d
El siguiente código cuenta cuántas secuencias continuas de números positivos
existen en un arreglo:

``` c
int comp1d(int a[],int n){int c=0,in=0;for(int i=0;i<n;i++){if(a[i]>0&&!in){c++;in=1;}else if(a[i]<=0){in=0;}}return c;}
```
<!-- c -->

**Tu tarea:**
1. Refactorizar aplicando estilo Allman y nombres booleanos claros
   (`en_segmento_positivo`).
2. Validar casos de borde: todo positivo, todo negativo, arreglo vacío.
3. Escribir tests unitarios estructurados.

:::
<!-- {exercise} -->

---
