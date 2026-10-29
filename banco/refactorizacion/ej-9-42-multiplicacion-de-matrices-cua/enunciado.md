### Ejercicio 9.42 - Multiplicación de Matrices Cuadradas Comprimida ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-multiplicacion-matrices
Analizá y refactorizá la siguiente función que multiplica dos matrices cuadradas
de tamaño $N \times N$ representadas en arreglos unidimensionales planos:

``` c
void mx(int a[],int b[],int c[],int n){for(int i=0;i<n;i++)for(int j=0;j<n;j++){int s=0;for(int k=0;k<n;k++)s+=a[i*n+k]*b[k*n+j];c[i*n+j]=s;}}
```
<!-- c -->

**Tu tarea:**
1. Descomponer el triple lazo anidado aplicando estilo Allman riguroso y nombres
   autoexplicativos (`fila, columna, indice_k`).
2. Validar que los punteros no sean nulos y que la dimensión $N > 0$.
3. Escribir una función auxiliar para calcular el producto escalar entre una
   fila de $A$ y una columna de $B$.
4. Diseñar pruebas unitarias con `assert()` multiplicando matrices identidad y
   matrices con números enteros conocidos.

-   **[*plus ultra*]:** Documentar con Doxygen precondiciones de no solapamiento
    de punteros.

:::
<!-- {exercise} -->

---

## 6. Validación de Formatos, Parsing y Protocolos Simples
