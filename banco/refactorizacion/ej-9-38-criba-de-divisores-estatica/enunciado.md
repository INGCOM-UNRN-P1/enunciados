:::{exercise}
:label: ej-ref-criba-estatica
Refactorizá la siguiente función que llena un arreglo indicando la cantidad de
divisores propios de cada número:

``` c
void c(int a[],int n){for(int i=1;i<=n;i++){a[i-1]=0;for(int j=1;j<i;j++)if(i%j==0)a[i-1]++;}}
```

-   **[*plus ultra*]:** Descomponer en `int contar_divisores_propios(int n)` y
    `void llenar_tabla_divisores(int tabla[], int n)`.
-   **[*plus ultra*]:** Validar que `n > 0` y puntero no nulo.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Criba de Divisores Estática
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_divisores_estatica(int val);

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
