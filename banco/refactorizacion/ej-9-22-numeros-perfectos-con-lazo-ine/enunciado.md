:::{exercise}
:label: ej-ref-perfecto-ineficiente
Refactorizá la siguiente función que verifica números perfectos (donde la suma
de divisores propios es igual al número):

``` c
int perf(int n){int s=0;for(int i=1;i<n;i++){if(n%i==0)s+=i;}return s==n;}
```

-   **[*plus ultra*]:** Optimizar sumando divisores en pares hasta $\sqrt{n}$.
-   **[*plus ultra*]:** Retornar un `bool` claro y documentar precondiciones.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Perfectos con Lazo Ineficiente
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_rfectos_con_lazo_ine(int val);

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
