:::{exercise}
:label: ej-ref-mini-interprete
El siguiente código implementa una máquina virtual de pila simple para evaluar
expresiones en notación postfija con 4 códigos (`1=PUSH`, `2=ADD`, `3=SUB`,
`4=HALT`):

``` c
int vm(int prg[],int n){int st[32],top=0;for(int i=0;i<n;i++){int op=prg[i];if(op==1)st[top++]=prg[++i];else if(op==2){int b=st[--top],a=st[--top];st[top++]=a+b;}else if(op==3){int b=st[--top],a=st[--top];st[top++]=a-b;}else if(op==4)break;}return st[top-1];}
```

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

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Mini Intérprete de Pila de 4 Instrucciones
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_prete_de_pila_de_4_i(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
