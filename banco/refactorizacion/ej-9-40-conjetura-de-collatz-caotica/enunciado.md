:::{exercise}
:label: ej-ref-collatz-caotica
Refactorizá la siguiente función que cuenta la cantidad de pasos hasta llegar a
1 en la secuencia de Collatz ($3n+1$), la cual mezcla ternarios y lazos
`while(1)`:

``` c
int col(long long n){int c=0;if(n<=0)return -1;while(1){if(n==1)break;n=(n%2==0)?n/2:3*n+1;c++;}return c;}
```

-   **[*plus ultra*]:** Eliminar el ternario y el `while(1)`.
-   **[*plus ultra*]:** Escribir tests con `assert()` para `col(1) == 0`,
    `col(6) == 8` y `col(27) == 111`.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conjetura de Collatz Caótica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_a_de_collatz_caotica(int val);

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
