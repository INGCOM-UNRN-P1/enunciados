### Ejercicio 9.52 - Mini Intérprete de Pila de 4 Instrucciones ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-mini-interprete
El siguiente código implementa una máquina virtual de pila simple para evaluar
expresiones en notación postfija con 4 códigos (`1=PUSH`, `2=ADD`, `3=SUB`,
`4=HALT`):

``` c
int vm(int prg[],int n){int st[32],top=0;for(int i=0;i<n;i++){int op=prg[i];if(op==1)st[top++]=prg[++i];else if(op==2){int b=st[--top],a=st[--top];st[top++]=a+b;}else if(op==3){int b=st[--top],a=st[--top];st[top++]=a-b;}else if(op==4)break;}return st[top-1];}
```
<!-- c -->

**Tu tarea:**
1. Identificar riesgos de desbordamiento de pila (*stack overflow* y *stack
   underflow*).
2. Refactorizar usando un `enum` con los opcodes `OP_PUSH, OP_ADD, OP_SUB,
   OP_HALT`.
3. Extraer funciones auxiliares seguras para `push` y `pop` con verificación de
   límites.
4. Escribir tests unitarios que ejecuten programas de prueba válidos y detecten
   programas con errores.

:::
<!-- {exercise} -->

---

## 7. Desafíos Avanzados y Extra Difíciles
