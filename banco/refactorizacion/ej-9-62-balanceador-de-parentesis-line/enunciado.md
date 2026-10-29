:::{exercise}
:label: ej-ref-parentesis-balanceados
Refactorizá la siguiente función que verifica si los paréntesis `(` y `)` de una
cadena están correctamente balanceados:

``` c
int bal(char s[],int n){int d=0;for(int i=0;i<n;i++){if(s[i]=='(')d++;else if(s[i]==')'){d--;if(d<0)return 0;}}return(d==0)?1:0;}
```

**Tu tarea:**
1. Eliminar el operador ternario y retornar un `bool`.
2. Validar que un cierre sin apertura previa (`d < 0`) corte inmediatamente
   retornando `false`.
3. Escribir tests unitarios para `"(())"`, `"())("`, `"("` y `""`.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Balanceador de Paréntesis Lineal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_r_de_parentesis_line(int val);

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
