### Ejercicio 9.62 - Balanceador de Paréntesis Lineal ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-parentesis-balanceados
Refactorizá la siguiente función que verifica si los paréntesis `(` y `)` de una
cadena están correctamente balanceados:

``` c
int bal(char s[],int n){int d=0;for(int i=0;i<n;i++){if(s[i]=='(')d++;else if(s[i]==')'){d--;if(d<0)return 0;}}return(d==0)?1:0;}
```
<!-- c -->

**Tu tarea:**
1. Eliminar el operador ternario y retornar un `bool`.
2. Validar que un cierre sin apertura previa (`d < 0`) corte inmediatamente
   retornando `false`.
3. Escribir tests unitarios para `"(())"`, `"())("`, `"("` y `""`.

:::
<!-- {exercise} -->

---
