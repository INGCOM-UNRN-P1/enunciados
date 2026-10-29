:::{exercise}
:label: ej-ref-distancias-vectores
Refactorizá la siguiente función que calcula distancias entre dos vectores de
$N$ dimensiones según un selector de modo:

``` c
double dist(double a[],double b[],int n,int m){double s=0;for(int i=0;i<n;i++){double d=fabs(a[i]-b[i]);s+=(m==1)?d:d*d;}return(m==1)?s:sqrt(s);}
```

**Tu tarea:**
1. Descomponer en dos funciones puras independientes:
   `calcular_distancia_manhattan` y `calcular_distancia_euclidiana`.
2. Eliminar el parámetro selector `m` y los operadores ternarios.
3. Escribir tests unitarios con `assert()` comparando con tolerancia `1e-6`.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Distancias Manhattan y Euclidiana Todo-en-Uno
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__manhattan_y_euclidi(int val);

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

:::{hint} Consideraciones Didácticas
- Dividí la función multipropósito en calcular_distancia_manhattan y calcular_distancia_euclidiana.
- Eliminá el parámetro selector de modo y las bifurcaciones innecesarias dentro de los lazos.
- Usá fabs() para diferencias absolutas y sqrt() junto con sumas de cuadrados para la norma euclídea.
:::
