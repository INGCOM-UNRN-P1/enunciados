:::{exercise}
:label: ej-ref-cuadrado-magico-sudoku
El siguiente código evalúa si una matriz $3 \times 3$ plana de 9 elementos
contiene exactamente los dígitos del 1 al 9 sin repetir y si las sumas de todas
sus filas, columnas y diagonales son iguales a 15 (Cuadrado Mágico / Mini
Sudoku):

``` c
int sm(int m[9]){int u[10]={0},s=0;for(int i=0;i<9;i++){int v=m[i];if(v<1||v>9||u[v])return 0;u[v]=1;}for(int i=0;i<3;i++){int r=m[i*3]+m[i*3+1]+m[i*3+2],c=m[i]+m[i+3]+m[i+6];if(r!=15||c!=15)return 0;}int d1=m[0]+m[4]+m[8],d2=m[2]+m[4]+m[6];return(d1==15&&d2==15)?1:0;}
```

**Tu tarea:**
1. Desarmar la lógica monolítica identificando los tres pasos:
   - Verificación de permutación de dígitos 1 a 9.
   - Verificación de sumas de las 3 filas y 3 columnas igual a 15.
   - Verificación de las 2 diagonales igual a 15.
2. Descomponer el algoritmo en funciones auxiliares puras y modulares:
   - `bool contiene_digitos_1_a_9_unicos(const int matriz[9])`
   - `bool verificar_filas_y_columnas_magicas(const int matriz[9], int
     suma_esperada)`
   - `bool verificar_diagonales_magicas(const int matriz[9], int suma_esperada)`
   - `bool es_cuadrado_magico_3x3(const int matriz[9])`
3. Aplicar estilo Allman riguroso, constantes `#define CONSTANTE_MAGICA_3X3 15`
   y contratos Doxygen.
4. Escribir una suite de pruebas con `assert()` para el cuadrado mágico clásico
   de Lo Shu:
   $$\begin{pmatrix} 4 & 9 & 2 \\ 3 & 5 & 7 \\ 8 & 1 & 6 \end{pmatrix}$$

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de [EXTRA DIFÍCIL] El Cuadrado Mágico y Verificador de Sudoku $3 \times 3$
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_cil_el_cuadrado_magi(int val);

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
