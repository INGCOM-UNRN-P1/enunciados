### Ejercicio 9.47 - Compactador de Espacios Repetidos ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-compactar-espacios
Refactorizá la siguiente función que copia caracteres de `orig` a `dest`
colapsando múltiples espacios consecutivos en uno solo:

``` c
int comp(char o[],int n,char d[]){int j=0,e=0;for(int i=0;i<n;i++){if(o[i]==' '){if(!e){d[j++]=' ';e=1;}}else{d[j++]=o[i];e=0;}}return j;}
```
<!-- c -->

-   **[*plus ultra*]:** Retornar la nueva longitud escrita en `d`.
-   **[*plus ultra*]:** Escribir tests con `assert()` verificando secuencias con
    múltiples espacios.

:::
<!-- {exercise} -->

---
