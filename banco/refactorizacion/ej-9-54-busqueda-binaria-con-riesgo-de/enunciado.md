:::{exercise}
:label: ej-ref-busqueda-binaria-overflow
El siguiente código implementa búsqueda binaria pero utiliza el cálculo riesgoso
`int m = (l + r) / 2` que puede desbordar enteros grandes:

``` c
int bsearch(int a[],int n,int x){int l=0,r=n-1;while(l<=r){int m=(l+r)/2;if(a[m]==x)return m;if(a[m]<x)l=m+1;else r=m-1;}return -1;}
```

-   **[*plus ultra*]:** Reemplazar por `int medio = l + (r - l) / 2;`.
-   **[*plus ultra*]:** Agregar `const` al arreglo y formatear en Allman.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Búsqueda Binaria con Riesgo de Desbordamiento
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_inaria_con_riesgo_de(int val);

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
