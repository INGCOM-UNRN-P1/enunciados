:::{exercise}
:label: ej-ref-kadane-comprimido
Analizá el siguiente algoritmo que calcula la suma máxima de un subarreglo
contiguo (Algoritmo de Kadane) en una sola línea ofuscada:

``` c
int kad(int a[],int n){int m=a[0],c=a[0];for(int i=1;i<n;i++)c=(a[i]>c+a[i])?a[i]:c+a[i],m=(c>m)?c:m;return m;}
```

**Tu tarea:**
1. Eliminar los operadores ternarios y el operador coma `,`.
2. Escribir la lógica en estilo Allman con nombres claros (`maximo_global,
   maximo_actual`).
3. Validar que $N > 0$ y puntero no nulo.
4. Escribir tests unitarios para arreglos con números positivos, negativos y
   mixtos (ej. `{-2, 1, -3, 4, -1, 2, 1, -5, 4}` da `6`).

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Algoritmo de Kadane Comprimido
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_kadane_comprimido(int val);

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
