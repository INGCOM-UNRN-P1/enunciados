### Ejercicio 9.49 - Decodificador Run-Length (RLE) Numérico ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-rle-numerico
Refactorizá la siguiente función que decodifica pares `(valor, repeticiones)` en
un arreglo plano:

```{code-block} c
:linenos:
int rle_dec(int pares[], int n_pares, int sal[], int max_sal)
{
    int k=0;
    for(int i=0;i<n_pares*2;i+=2){
        int val=pares[i]; int rep=pares[i+1];
        for(int r=0;r<rep;r++){
            if(k>=max_sal) return -1;
            sal[k++]=val;
        }
    }
    return k;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Validar que `rep >= 0` y no desborde `max_sal`.
-   **[*plus ultra*]:** Aplicar estilo Allman estricto y nombres descriptivos.

:::
<!-- {exercise} -->

---
