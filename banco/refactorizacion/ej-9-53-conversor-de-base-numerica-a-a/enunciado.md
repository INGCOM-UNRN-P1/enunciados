### Ejercicio 9.53 - Conversor de Base Numérica a Arreglo ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-conversor-base
Refactorizá la siguiente función que convierte un entero positivo a sus dígitos
en una base entre 2 y 16:

```{code-block} c
:linenos:
int base_conv(int n, int b, char out[], int max_len)
{
    char dig[]="0123456789ABCDEF"; int len=0;
    if(n==0){out[0]='0'; return 1;}
    while(n>0&&len<max_len){ out[len++]=dig[n%b]; n/=b; }
    for(int i=0;i<len/2;i++){ char t=out[i]; out[i]=out[len-1-i]; out[len-1-i]=t; }
    return len;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Validar que $2 \le b \le 16$ y $n \ge 0$.
-   **[*plus ultra*]:** Modularizar la inversión del arreglo en una función
    `invertir_arreglo_char`.

:::
<!-- {exercise} -->

---
