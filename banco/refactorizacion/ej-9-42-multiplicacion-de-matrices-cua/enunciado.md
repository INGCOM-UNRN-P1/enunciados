:::{exercise}
:label: ej-ref-multiplicacion-matrices
Analizá y refactorizá la siguiente función que multiplica dos matrices cuadradas
de tamaño $N \times N$ representadas en arreglos unidimensionales planos:

``` c
void mx(int a[],int b[],int c[],int n){for(int i=0;i<n;i++)for(int j=0;j<n;j++){int s=0;for(int k=0;k<n;k++)s+=a[i*n+k]*b[k*n+j];c[i*n+j]=s;}}
```

**Tu tarea:**
1. Descomponer el triple lazo anidado aplicando estilo Allman riguroso y nombres
   autoexplicativos (`fila, columna, indice_k`).
2. Validar que los punteros no sean nulos y que la dimensión $N > 0$.
3. Escribir una función auxiliar para calcular el producto escalar entre una
   fila de $A$ y una columna de $B$.
4. Diseñar pruebas unitarias con `assert()` multiplicando matrices identidad y
   matrices con números enteros conocidos.

-   **[*plus ultra*]:** Documentar con Doxygen precondiciones de no solapamiento
    de punteros.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Multiplicación de Matrices Cuadradas Comprimida
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_cion_de_matrices_cua(int val);

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
